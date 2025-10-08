#include<stdio.h>

int main(){
  int num,reversed=0,remainder,original;

  //Input number from user
  printf("Enter a number:");
  scanf("%d",&num);

  original=num;//Store the original number

  //Reversed the number
  while(num!=0){
    remainder=num%10;   //Get last digit
    reversed=reversed*10+remainder;//Build reversed number

    num/=10;        //Remove last digit
  }

  //Check if palindrome
  if(original==reversed){
    printf("%d is a palindrome number.\n",original);
  }else{
    printf("%d is not a palindrome number.\n",original);
  }

  return 0;
}
