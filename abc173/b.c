#include<stdio.h>
int main()
{
  int n, i, ac = 0, wa = 0, tle = 0, re = 0;
  scanf("%d", &n);
  char res[n][4];

  for (i = 0; i < n; i++) {
    scanf("%s", res[i]);
    if (res[i][0] == 'A')
      ac++;
    else if (res[i][0] == 'W')
      wa++;
    else if (res[i][0] == 'T')
      tle++;
    else if (res[i][0] == 'R')
      re++;
  }

  printf("AC x %d\n", ac);
  printf("WA x %d\n", wa);
  printf("TLE x %d\n", tle);
  printf("RE x %d\n", re);
  return(0);
}
