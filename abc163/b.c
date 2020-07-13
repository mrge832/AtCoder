#include <stdio.h>
int main()
{
  int n,m,i,d;
  int ans;
  scanf("%d %d", &n, &m);
  i = 0;
  ans = n;
  while(i < m)
  {
    scanf("%d", &d);
    ans -= d;
    i++;
  }
  if(ans < 0)
    printf("-1");
  else
    printf("%d", ans);
  return (0);
}
