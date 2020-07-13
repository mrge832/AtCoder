#include <stdio.h>

int main() {
 int n,k,i,o,h,x;
 int ans;

 scanf("%d %d", &n, &k);

 int s[n];
 for(i = 0; i < n; i++)
   s[i] = 0;

 for(i = 0; i < k; i++) {
   scanf("%d", &o);
   for (h = 0; h < o; h++) {
     scanf("%d", &x);
     s[x - 1]++;
   }
 }

 ans = 0;
 for(i = 0; i < n; i++) {
   if(s[i] == 0)
     ans++;
 }

 printf("%d", ans);
 return(0);
}
