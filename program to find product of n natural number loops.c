#include<stdio.h>
void main()
{
    int i,n,product=1;
    printf("enter value of n\t");
    scanf("%d",&n);
      for (i=1,i<=n;i++)
      {
          product=product+i;

      }
      printf("product=%d",product);
}
