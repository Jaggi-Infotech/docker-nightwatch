#include "git.h"

#include "absl/log/log.h"
#include "git2/clone.h"
#include "git2/errors.h"
#include "git2/global.h"

namespace nightwatch {

namespace {

std::string GetGitError() {
  const git_error *error = git_error_last();
  if (error == nullptr)
    return "";
  return error->message;
}

} // namespace

GitRepo::GitRepo(const std::string &location) : location_(location) {}

absl::Status GitRepo::Initialize() {
  int status;
  status = git_libgit2_init();
  if (status < 0) {
    LOG(ERROR) << status << ":" << GetGitError();
  }

  git_repository *repo;
  git_clone_options opts = GIT_CLONE_OPTIONS_INIT;
  status = git_clone(&repo, location_.c_str(), "/tmp/nightwatch_repo", &opts);
  if (status != 0) {
    LOG(ERROR) << status << ":" << GetGitError();
  }

  // TODO: Instead of logging the errors, return an apt status object.
  return {};
}

absl::Status GitRepo::ChooseBranch(const std::string &branch_name) {
  return {};
}

char *GitRepo::GetTarBall() { return nullptr; }

} // namespace nightwatch
