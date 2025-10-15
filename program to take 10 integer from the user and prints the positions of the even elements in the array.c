#include<stdio.h>

int main(){
    int arr[10];
    int i;

    //Taking input for 10 integers
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //Printing positions of even elements
    printf("nPositions of even elements in the array:\n");
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
          printf("Element %d at position %d\n",arr[i],i+1);
        }
    }

    return 0;
}
