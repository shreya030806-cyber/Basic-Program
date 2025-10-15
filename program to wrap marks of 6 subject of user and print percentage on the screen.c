#include<stdio.h>

int main(){
    float marks[6],total=0,percentage;
    int i;

    //Taking input for 6 subjects
    printf("Enter marks of 6 subjects:\n");
    for(i=0;i<6;i++){
        printf("Subject%d:",i+1);
        scanf("%f",&marks[i]);
        total+=marks[i];
    }

    //Calculating percentage
    percentage=total/6;

    //Displaying result
    printf("\n Total Marks=%.2f\n",total);
    printf("Percentage=%.2f%%\n",percentage);

    return 0;
}
