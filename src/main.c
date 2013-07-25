#include <stdio.h>

#include "hello.h"

int main(int argc, char* argv[]) {
  hello();
  for(int i = 0; i < argc; ++i) {
    printf("%d: %s\n", i, argv[i]);
  }
  return 0;
}
