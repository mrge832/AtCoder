#include <stdio.h>
int main()
{
  int n;
  long ans;
  scanf("%d", &n);
  int i = 1;
  ans = 0;
  while (i <= n)
  {
   if(!(i%3 == 0 || i%5 == 0))
     ans += i;
   i++;
  }
  printf("%ld", ans);
  return (0);
}
