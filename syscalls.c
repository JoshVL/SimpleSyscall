#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int total = atoi(argv[1]) - 1;
  int good = atoi(argv[2]) - 1;
  int pid = getpid();

  for (int i = 0; i < (total - good); i++) {
    kill(-1);
  }

  for (int i = 0; i < good; i++) {
      getpid();
  }

  printf(1,"%d %d\n", getnumsyscalls(pid), getnumsyscallsgood(pid));
  exit();
}
