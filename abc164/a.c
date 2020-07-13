#include <stdio.h>

int main() {
  int s,w;
  scanf("%d %d", &s, &w);

  if (s <= w)
    printf("unsafe");
  else
    printf("safe");

  return (0);
}
