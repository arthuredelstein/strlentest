#include <string.h>
#include <stdio.h>

int main() {
  char* x = NULL; //"blah";
  printf("Using string '%s'.\n", x);
  int l = strlen(x);
  printf("The length is %d.", l);
};
