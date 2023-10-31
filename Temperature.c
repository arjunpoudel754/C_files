#include<stdio.h>
void main()
{
    int n;
    float tc,tf,tk;
    printf("Choose one of the followings.\n");
    printf("1.TC-TF\t2.TF-TC\t3.TC-TK\t4.TK-TC");
    do{
        printf("Answer: ");
        scanf("%d", &n);
    }while(!(n>=1 && n<=4));
    switch (n)
    {
    case 1:
        {printf("Enter the Celsius Temperature: ");
        scanf("%f",&tc);
        tf = 1.8*tc+32;
        printf("The Fahrenheit temperature is %.2f .F",tf);}
        break;
    case 2:
        printf("Enter the Fahrenheit temperature: ");
        scanf("%f", &tf);
        tc = (tf-32)/1.8;
        printf("The Celsius Temperature is %.2f.C",tc);
        break;
    case 3:
        printf("Enter the Celsius Temperature: ");
        scanf("%f", &tc);
        tk = tc + 273;
        printf("The Kelvin Temperature is %.2fK ",tk);
        break;
    case 4:
        printf("Enter the Kelvin Temperature: ");
        scanf("%f", &tk);
        tc = tk - 273;
        printf("the Celsius Temperature is %.2f", tc);
    }
}