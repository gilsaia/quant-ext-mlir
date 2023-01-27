#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "frontend.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stdout, "Uage: %s number\n", argv[0]);
    return 1;
  }
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  fprintf(stdout, "The square root of %g is %g\n", inputValue, outputValue);
  test_python();
  return 0;
}