#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "module.h"

struct unknown {
  char *name;
};

/* 
 * Given an integer return the corresponding
 * number of asterisks as a string.
 * 
 * The calling code does not know what 
 * type UNKNOWN represents.
 */
UNKNOWN get_unknown(int i)
{
  static char val[27];
  UNKNOWN retval;

  int j;
  for(j = 0; j <= i; j++)
    val[j] = 'x';
  val[j]='\0';

  retval = (UNKNOWN) malloc(sizeof(struct unknown));
  retval->name = strdup(val);
  return retval;
}

/*
 * The API for using an UNKNOWN.
 * Print its value.
 */ 
void unknown_print(UNKNOWN u)
{
  printf("[%s]\n", u->name);
}
