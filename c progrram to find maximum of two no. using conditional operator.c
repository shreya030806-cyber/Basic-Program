#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    r=a>b?a:b;
    printf("the greatest number:%d",r);

}
