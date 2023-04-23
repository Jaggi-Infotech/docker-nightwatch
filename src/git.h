#include <filesystem>
#include <string>

#include "absl/status/status.h"
#include "git2/types.h"

namespace nightwatch {

class GitRepo {
public:
  // Constructors
  explicit GitRepo(const std::string_view location);
  GitRepo(const std::string_view name, const std::string_view location);

  // Operations
  absl::Status Initialize();
  absl::Status ChooseBranch(const std::string_view branch_name);
  void GetTarBall();

private:
  const std::filesystem::path GetRepoFilePath();

  const std::string name_; // must be unique
  const std::string location_;
  git_repository *repo_ = nullptr;
};

} // namespace nightwatch
