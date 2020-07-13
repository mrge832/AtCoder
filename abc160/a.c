#include<stdio.h>

int main()
{
  int i;
  char a[100];

  scanf("%s", a);
  if(a[2] == a[3] && a[4] == a[5])
    printf("Yes");
  else
    printf("No");
  return(0);
}
