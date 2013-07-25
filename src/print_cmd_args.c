#include "print_cmd_args.h"

FILE* fprint_cmd_args(FILE* f, int argc, char* argv[]) {
  for(int i = 0; i < argc; ++i )
    fprintf(f, "%d: %s\n", i, argv[i]);
  return f;
}

