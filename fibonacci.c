#include<stdio.h>
int main()
{ int a,b,c,i,n; scanf("%d",&n); a=0; b=1; printf("0 1 "); for(i=2;i<n;i++) { c=a+b; printf("%d ",c); a=b; b=c; }}