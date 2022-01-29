#include<stdio.h>
#include<stdlib.h>

int main()

{
    char char1;
    char char2;
    char char3;

    printf("Enter any three alphabets: ");
    scanf("%c%c%c", &char1,&char2,&char3);

    printf("%c%c%c", char3,char2,char1);

    return 0;

}
