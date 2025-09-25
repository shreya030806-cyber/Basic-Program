#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    //Convert to lowercase for easier comparison
    char lower = tolower(ch);

    //check vowel
    if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
            printf("%c is a vowel.\n",ch);
    }
    //check digit
    else if(ch>='0'&&ch<='9'){
      printf("%c is a digit.\n",ch);
    }
    //check consonant (alphabet but not vowel)
    else if((lower>='a'&&lower<='z')){
      printf("%c is a consonant.\n",ch);
    }
    else{
      printf("%c is not a vowel,digit,or consonant(special character).\n",ch);
    }

    return 0;
}
