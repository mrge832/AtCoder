#include <stdio.h>

int main() {
  int i, ans;
  char s[2*10*10*10*10*10 + 1], t[2*10*10*10*10*10 + 1];

  scanf("%s", s);
  scanf("%s", t);

  ans = 0;
  while (s[i]) {
  	if (s[i] != t[i])
      ans++;
    i++;
  }

  printf("%d", ans);
  return (0);
}
