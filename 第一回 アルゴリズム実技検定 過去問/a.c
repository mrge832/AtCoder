#include <stdio.h>

int main() {
  char s[4];
  int i = 0;
  int ans = 0;

  scanf("%s", s);

  while(i < 3) {
  	if (s[i] >= 48 && s[i] <= 57) {
      s[i] -= 48;
      i++;
    }
    else {
      printf("error");
      return (0);
    }
  }

  for(i = 0; i < 3; i++) {
    ans = ans + s[i];
    ans *= 10;
  }

  ans *= 2;
  ans /= 10;
  printf("%d", ans);
  return (0);
}
