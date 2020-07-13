#include <stdio.h>

int main(){
  int n, m, i, sum = 0, count = 0;
  scanf("%d %d", &n, &m);
  int a[n - 1];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  double vote = (double)sum/(4*(double)m);

  for(i = 0; i < n; i++) {
  	if (a[i] >= vote)
      count++;
  }

  if (count >= m)
    printf("Yes");
  else
    printf("No");

  return(0);
}
