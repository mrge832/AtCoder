#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
  return (strcmp((char *)a,(char *)b));
}

int main() {
  int n, i;
  char s[200001][11];
  int ans;
  scanf("%d", &n);

  i = 0;
  while (i < n) {
    scanf("%s", s[i]);
    i++;
  }

  qsort(s, n, sizeof *s, compare);

  i = 0;
  ans = 0;
  while (i < n) {
    if (strcmp(s[i],s[i + 1]) != 0)
      ans++;
    i++;
  }

  printf("%d", ans);
  return (0);
}
