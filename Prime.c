#include<stdio.h>
void main()
{
    int i,j,n,count=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=2;i<=100000;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j ==0)
            {
                break;
            }
        }
        if(i==j){
            printf("%d ",i);
            count++;
        }
        if(count == n)
            break;
    }
}