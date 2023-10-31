#include<stdio.h>
int main()
{
    int num,digit,reverse=0;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }while(!(num>0));
    do
    {
        digit = num%10;
        reverse = 10*reverse +digit;
        num /= 10;
    } while (num != 0);
    printf("Reverse digits = %d", reverse);
    return 0;
}