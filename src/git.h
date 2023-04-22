#include <string>

#include "absl/flags/flag.h"
#include "absl/status/status.h"
#include "git2/clone.h"

namespace nightwatch {

class GitRepo {
public:
  GitRepo(const std::string &url);
  absl::Status Initialize();
  absl::Status ChooseBranch(const std::string &branch_name);
  // TODO: change return type
  char *GetTarBall();
};

} // namespace nightwatch
