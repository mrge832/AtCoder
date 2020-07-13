#include <stdio.h>
int main()
{
  int n,i;
  scanf("%d", &n);
  int m[n];
  int boss[n];
  for (i = 0; i <= n; i++)
    boss[i] = 0;
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &m[i]);
    boss[m[i]]++;
  }
  for(i = 1; i <= n; i++)
    printf("%d\n", boss[i]);
  return (0);
}
