#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
  int i, n, m, ans = 0;
  scanf("%d %d", &n, &m);
  int p[n];

  for(i = 0; i < n; i++)
	scanf("%d", &p[i]);
  qsort(p, n, sizeof(int), compare_int);

  for(i = 0; i < m; i++)
   ans += p[i];

  printf("%d", ans);
  return(0);
}
