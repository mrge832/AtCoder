#include <stdio.h>

int main() {
  int x[4];
  int i;

  for (i = 0; i < 5; i++) {
    scanf("%d", &x[i]);
    if (x[i] == 0)
     printf("%d", i + 1);
  }

  return (0);
}
