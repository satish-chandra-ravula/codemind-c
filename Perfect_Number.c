#include<stdio.h>
int main()
{ int sum=0,a,i; scanf("%d",&a); for(i=1;i<a;i++) { if(a%i==0) { sum=sum + i; } } if(sum==a) { printf("True"); } else { printf("False"); }}