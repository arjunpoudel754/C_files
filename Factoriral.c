#include<stdio.h>
void main()
{
    int n,i,j,original;
    long fac=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n>=1)
    {
        fac *= n;
        n--;
    }
    printf("%d! = %ld",original,fac);
}