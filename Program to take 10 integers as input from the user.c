#include <stdio.h>

int main(){
  int arr[10],value,i,found=0;
  
  //Taking 10 integers from user
  printf("Enter 10 integers:\n");
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

  //Taking value to search
  printf("\nEnter the value to search:");
  scanf("%d",&value);
  
  //Searching the value in array
  for(i=0;i<10;i++){
   if(arr[i]==value){
      found=1;
      break;
      }
     }
     
   //Display result
   if(found==1)
     printf("\nYes,%d is present in the array at position %d.\n", value,i+1);
    else
     printf("\nNo,%d is not present in the array.\n",value);
     
  



    return 0;
}