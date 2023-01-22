#include<stdio.h>
int main()
{ int a,i,r,ans=0; scanf("%d",&a); int b=a; for(i=a;a!=0;a=a/10) { r=a%10; ans=ans*10+ r; } if(b==ans) { printf("True"); } else printf("False"); }