#include <string>

#include "absl/status/status.h"

namespace nightwatch {

class GitRepo {
public:
  GitRepo(const std::string &location);
  absl::Status Initialize();
  absl::Status ChooseBranch(const std::string &branch_name);
  // TODO: change return type
  char *GetTarBall();

private:
  std::string location_;
};

} // namespace nightwatch
