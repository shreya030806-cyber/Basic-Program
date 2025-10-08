#include<stdio.h>

int main(){
  int num,i;
  unsigned long long factorial=1;//To handle big values

  //input
  printf("Enter a numbers:");
  scanf("%d",&num);

  //Check for negative numbers
  if(num<0){
     printf("Factorial is not defined for negative numbers.\n");
  }else{
    //Loop to calculate factorial
    for(i=1;i<=num;i++){
        factorial*=i;
    }
    printf("Factorial of %d=%||u\n",num,factorial);
  }

  return 0;
}
