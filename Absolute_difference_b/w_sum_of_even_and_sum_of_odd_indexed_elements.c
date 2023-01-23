#include<stdio.h>
int main()
{ int n,i,e=0,o=0; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) { scanf("%d",&a[i]); } for(i=0;i<n;i++) { if(i%2!=0) { o=o+a[i]; } else if(i%2==0) { e=e+a[i]; } } if(e>o) printf("%d",e-o); else if(o>e)printf("%d",o-e); else printf("0");}