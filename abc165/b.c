#include <stdio.h>

int main()
{
  long int x, i, ans;

  scanf("%ld", &x);

  i = 100;
  for(ans = 0; i < x; ans++)
    i = i  * 1.01;
  printf("%ld", ans);
  return(0);
}
