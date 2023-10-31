#include<stdio.h>
int main()
{
    int num;
    long int factorial = 1;
    do{
    printf("enter  a positive integer: ");
    scanf("%d", &num);
    }while(!(num >0));

    while(num >=1)
    {
        factorial *= num;
        num--;
    }
    printf("Factorial = %ld", factorial);
    return 0;
}