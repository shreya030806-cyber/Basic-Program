#include<stdio.h>

int main(){
  int num,reversed=0,remaindre;

  //input number
  printf("Enter a number:");
  scanf("%d",&num);

  //Reverse logic
  while(num!=0){
    remainder=num%10;     //Get last digit
    reversed=reversed*10+remainder;//Add digit to reversed
    num/=10;       //Remove last digit
  }

  //Output result
  printf("Reversed number=%d\n",reversed);

  return 0;
}
