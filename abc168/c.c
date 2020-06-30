#include <stdio.h>
#include <math.h>

int main() {
  double a, b, h, m, deg, ans;
  scanf("%lf %lf %lf %lf", &a, &b, &h, &m);

  //c^2=a^2+b^2−2ab*cosC
  deg = fabs((11*m-60*h)*M_PI/360);
  ans = sqrt(a*a + b*b - 2*a*b*cos(deg));

  printf("%.10lf", ans);
  return(0);
}
