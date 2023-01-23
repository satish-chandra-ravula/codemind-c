#include<stdio.h>
int main()
{ int n,i,o=0; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) { scanf("%d",&a[i]); } for(i=0;i<n;i++) { if(i%2==0) { if(a[i]%2!=0) { o=o+1; } } } if(o>=1) { printf("False"); } else { printf("True"); }}