#include <stdio.h>

int main() {
  char a[2];
  scanf("%s", a);

  if(a[0] >= 65 && a[0] <= 90)
    printf("A");
  else
    printf("a");

  return(0);
}
