#include<stdio.h>
int main()
{ int n,i,b,c=0; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) { scanf("%d",&a[i]); } scanf("%d",&b); for(i=0;i<n;i++) { if(a[i]==b) { c=c+1; } } if(c>=1) printf("True"); else printf("False");}