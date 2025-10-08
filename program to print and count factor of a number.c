#include<stdio.h>

int main(){
  int num,i,count=0;

  //Input numbers
  printf("Enter a number:");
  scanf("%d",&num);

  printf("Factors of %d are:",num);

  //Loop to check factors
  for(i=1;i<=num;i++){
    if(num%i==0){ //if i divides num completely
       printf("%d",i);
        count++;
    }
  }
  printf("\n Total number of factors=%d\n",count);

  return 0;
}
