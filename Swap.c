#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers a and b: \n");
    printf("a = ");
    scanf("%d", &a); printf("\n");
    printf("b = ");
    scanf("%d", &b); printf("\n");
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swapped values are:\n a= %d\n b = %d\n", a,b);
    return 0;
}