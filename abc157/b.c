#include<stdio.h>

int main()
{
  int a[3], b[3], c[3];
  int n, i, k, j;
  int ans;

  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  scanf("%d %d %d", &b[0], &b[1], &b[2]);
  scanf("%d %d %d", &c[0], &c[1], &c[2]);
  scanf("%d", &n);

  i = 0;
  while(i < n)
  {
    scanf("%d", &k);
    j = 0;
    while(j < 3)
    {
      if(a[j] == k)
        a[j] = 1;
      if(b[j] == k)
        b[j] = 1;
      if(c[j] == k)
        c[j] = 1;
      j++;
    }
    i++;
  }

  if((a[0] == 1 && a[1] == 1 && a[2] == 1) || (b[0] == 1 && b[1] == 1 && b[2] == 1) ||
     (c[0] == 1 && c[1] == 1 && c[2] == 1) || (a[0] == 1 && b[1] == 1 && c[2] == 1) ||
     (c[0] == 1 && b[1] == 1 && a[2] == 1) || (a[0] == 1 && b[0] == 1 && c[0] == 1) ||
     (a[1] == 1 && b[1] == 1 && c[1] == 1) || (a[2] == 1 && b[2] == 1 && c[2] == 1))
    printf("Yes");
  else
    printf("No");
  return(0);
}
