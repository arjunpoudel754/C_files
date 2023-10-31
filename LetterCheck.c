#include<stdio.h>
int main()
{
    char c;
    printf("Enter a charecter: ");
    scanf("%c", &c);
    if(c>='A' && c<='Z')
        printf("Your character is a capital letter\n ");
    else if(c>='a' && c<='z')
        printf("Your character is a small letter\n");
    else if(c>='0' && c<='9')
        printf("Your character is a digit\n");
    else
        printf("Your character is a special symbol\n");
    return 0;
}