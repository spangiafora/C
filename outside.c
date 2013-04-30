#include "module.h"

/*
 * Because all this code knows about UNKNOWN
 * is what it sees in module.h, UNKNOWN is essentially
 * opaque and can only be accessed via its API, in this
 * case "unknown_print."
 */
int main(int argc, char **argv)
{
  int i = 0;

  for(i = 0; i < 10; i++)
  {
    UNKNOWN u = get_unknown(i);
    unknown_print(u);
  }
}
