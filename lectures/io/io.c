//
// Created by hengxin on 7/14/21.
//

#include <stdio.h>

int main() {
  /**
   * int: %d
   */
//  int d;
//  scanf("%d", &d);
//  printf("d = %d\n", d);

//  int d1;
//  int d2;
//  scanf("%d%d", &d1, &d2);
//  printf("d1 = %d \t d2 = %d\n", d1, d2);

  /**
   * string: %s
   */
  char str[10];
  scanf("%9s", str);
  printf("str = %s\n", str);
  scanf("%s", str);
  printf("str = %s\n", str);

  /**
   * input: 302abc302
   */
  int e;
  char s[10];
  scanf("%d%s", &e, s);
  printf("e = %d \t s = %s", e, s);

  return 0;
}