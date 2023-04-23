#include "git.h"

#include <cstdlib>
#include <filesystem>

#include "absl/log/log.h"
#include "git2/clone.h"
#include "git2/errors.h"
#include "git2/global.h"

namespace nightwatch {
namespace {

const std::filesystem::path GetBaseDataDir() {
  return std::filesystem::path(std::getenv("HOME")) / ".local/share/nightwatch";
}

std::string GetGitError() {
  const git_error *error = git_error_last();
  if (error == nullptr)
    return "";
  return error->message;
}

std::string GetNameFromLocation(const std::string_view location) {
  return std::filesystem::path(location).stem();
}

} // namespace

GitRepo::GitRepo(const std::string_view location)
    : GitRepo(GetNameFromLocation(location), location) {}

GitRepo::GitRepo(const std::string_view name, const std::string_view location)
    : name_(name), location_(location) {}

const std::filesystem::path GitRepo::GetRepoFilePath() {
  return GetBaseDataDir() / name_;
};

absl::Status GitRepo::Initialize() {
  // TODO: Verify name does not have a / and is not a ., etc.

  // Initialize Git
  int st;
  st = git_libgit2_init();
  if (st < 0) {
    return absl::UnknownError(GetGitError());
  }

  // Check if the repository has already been cloned
  st = git_repository_open(&repo_, GetRepoFilePath().string().c_str());
  if (st < 0) {
    LOG(INFO) << "Cloning repo from upstream: " << location_;

    // Delete existing data at location
    std::error_code error_code;
    std::filesystem::remove_all(GetRepoFilePath(), error_code);

    // Clone the repo
    git_clone_options opts = GIT_CLONE_OPTIONS_INIT;
    st = git_clone(&repo_, location_.c_str(),
                   GetRepoFilePath().string().c_str(), &opts);
    if (st != 0) {
      return absl::UnknownError(GetGitError());
    }
  }

  return absl::OkStatus();
}

absl::Status GitRepo::ChooseBranch(const std::string_view branch_name) {
  return {};
}

void GitRepo::GetTarBall() {}

} // namespace nightwatch
