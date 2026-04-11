#include <stdio.h>
int main() {
 int z[10],
 a,
 i,
 b,
 c;
 a = -1;
 b = 1;
 for(i = 0; i < 10; i++) {

  c = a + b;
  printf("%d\n", c);
  a = b;
  b = c;
 }
}