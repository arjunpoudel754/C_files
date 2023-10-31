#include<stdio.h>
int main()
{
    int days,count =0;
    printf("Enter the days: ");
    scanf("%d", &days);
    while(!(days <=30))
    {
        days = days-30;
        count++;
    }
    printf("%d month(s) %d day(s)",count,days);
}

