#include<stdio.h>
void main()
{
    int i,j;
    char a='A',b='a';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(a<='Z'){
            printf("%c  ",a,b);
            a++;
            }
            else
                printf("   ");

        }
        printf("\t");
        for(j=1;j<=6;j++)
        {
            if(b <='z'){
            printf("%c  ",b);
            b++;}
            else
                printf("   ");
        }
    printf("\n\n");
    }
}