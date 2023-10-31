#include<stdio.h>
int main()
{
    int a=0,b=1,i,n,next=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d ",a,b);
    for(i=1;i<=n;i++)
    {
        next = a+b;
        a = b;
        b = next;
        printf("%d ",a);
    }
    return 0;
}
