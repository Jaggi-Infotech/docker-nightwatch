#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/log/check.h"
#include "absl/log/initialize.h"
#include "src/git.h"

ABSL_FLAG(std::string, git_repo_location, "", "Location of the git repository");

int main(int argc, char *argv[]) {
  // Initialize abseil
  absl::InitializeLog();
  absl::ParseCommandLine(argc, argv);

  // Check flags
  std::string git_repo_location = absl::GetFlag(FLAGS_git_repo_location);
  QCHECK(!git_repo_location.empty()) << "Git repo location must be specified.";

  // Fetch Git Repository
  nightwatch::GitRepo repo(git_repo_location);
  QCHECK_OK(repo.Initialize());

  return 0;
}
