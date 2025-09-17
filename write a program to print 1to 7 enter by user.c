#include<stdio.h>
int main()
{
    int choice;
    printf("enter a nuber betwwen 1 to 7");
    scanf("%d",&choice);
    switch(choice)
    {
        case1: printf("monday");
        break;
        case2: printf("tuesday");
        break;
        case3: printf("wednesday");
        break;
        case4: printf("thursday");
        break;
        case5: printf("friday");
        break;
        case6: printf("saturday");
        case7: printf("sunday");
        default: printf ("wrong choice");
}
}


