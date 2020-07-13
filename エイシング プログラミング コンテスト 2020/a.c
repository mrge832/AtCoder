#include <stdio.h>
int main() {
  int l, r, d, ans = 0;
  scanf("%d %d %d", &l, &r, &d);

  while(l <= r) {
    if (l%d == 0)
      ans++;
    l++;
  }

  printf("%d", ans);
  return (0);
}
