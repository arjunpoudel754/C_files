#include<stdio.h>
void main()
{
    int a,b;
    char p;
    float div;
    printf("Enter Two numbers\n");
    scanf("%d%d", &a,&b);
    do{
    printf("Enter the operator: ");
    scanf("%c", &p);
    }while(!(p == '+' || p == '-' || p == '*' || p == '/'));
    switch (p)
    {
        case '+':
            printf("%d + %d = %d", a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d x %d = %d", a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %.2f", a,b,(float)a/b);
            break;
    }

}
