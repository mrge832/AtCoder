#include <stdio.h>
int main() {
  int n, a, i, ans = 0;
  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &a);
  	if ((i+1)%2 != 0 && a%2 != 0)
      ans++;
  }

  printf("%d", ans);
  return (0);
}
