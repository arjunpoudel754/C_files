#include <stdio.h>
int main()
{
    int num, R;
    do
    {
        printf("Enter a positive integer less than 100\n");
        scanf("%d", &num);
    } while (!(num >= 0 && num <= 100));
    R = num%2;
    if( R == 1)
        printf("Your integer is Odd\n");
    else
        printf("Your integer is Even\n");
    return 0;
}