#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,k;
    system("cls");
    printf("Square with Hollow\n");
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        if(i == 1 || i == n)
        {
            for( j=1;j<=n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for( j=1;j<=n;j++)
        {
            if(j==1)
                printf("* ");
            else
            printf("  ");
        }
        }
        printf("\n");
    }
        for(i=n;i>=1;i--)
    {
        for(k=i+1;k<=n;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
