#include<stdio.h>
int main()
{
  int n, i, pay, ans;
  scanf("%d", &n);

  for (i = 1; pay < n; i++)
    pay = i*1000;

  ans = pay - n;

  printf("%d", ans);
  return(0);
}
