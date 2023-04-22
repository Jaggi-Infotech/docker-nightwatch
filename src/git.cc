#include "git.h"

namespace nightwatch {

GitRepo::GitRepo(const std::string &url) {}
absl::Status Initialize() { return {}; }
absl::Status ChooseBranch(const std::string &branch_name) { return {}; }
char *GetTarBall() { return nullptr; }

} // namespace nightwatch
