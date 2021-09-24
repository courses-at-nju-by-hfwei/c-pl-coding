//
// Created by hengxin on 8/27/21.
//

#include <stdio.h>
#include <float.h>

int main() {
  printf("FLT_MIN = %.10e \t FLT_MAX = %.10e\n", FLT_MIN, FLT_MAX);

  /**
   * overflow
   * TODO:
   */
  float of = FLT_MAX + 1e10;
  printf("of = %6e\n", of);

  /**
   * underflow
   * TODO:
   */
  float uf = 0.0f;

  /**
   * significance loss
   */
  float g = 0.3f;
  printf("g = %.10f.\n", g);

  float h1 = 0.4f;
  float h2 = 0.6f;
  printf("h1 = %.10f \t h2 = %.10f \t h1 * h2 = %.10f.\n", h1, h2, h1 * h2);

  return 0;
}
