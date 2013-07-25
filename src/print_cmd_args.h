#ifndef PRINT_CMD_ARGS_H
#define PRINT_CMD_ARGS_H

#include <stdio.h>

FILE* fprint_cmd_args(FILE *f, int argc, char* argv[]);

static inline FILE* print_cmd_args(int argc, char* argv[]) {
  return fprint_cmd_args(stdout, argc, argv);
}

#endif
