#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Addition();
void Substraction();
void Multiplication();
//void Division();
//void Modulo();
//void Percentage();

                                /*The switch function doesn't run when
                                  the do-while loop is repeated for 
                                  the second time. Please help me with that.*/
void main()
{
  char n; int y;
  system("cls");
  printf("This is a simple calculator.\n");
  printf("----------------------------\n");
  printf("It gives you calculation on Addition(+), Subtraction(-), Multiplication(*), Division(/), Modulo(m) and percentage(%%).\n");
  do{
        printf("Type the operator you want calculation on[+,-,*,/,m,%%]: ");
        scanf(" %c", &n);
        switch (n)
        {
        case '+':                              
            Addition();                          
          break;                                    
        case '-':
            Substraction();
          break;
        case '*':
            Multiplication();
          break;
        /*case '/':
            Division();
          break;
        case 'm':
            Modulo();
          break;
        case '%':
            Percentage();
          break; */
        default:
            printf("Oh-Oh, you entered wrong character\n");
          break;
        }
        printf("Thank you for using this calculator");
        do{
        printf("Do you wanna perform another operation?\nYes(1)\t\t\tNo(0)\n");
        scanf("%d", &y);
        }while(!(y == 1 || y == 0));
  }while((y==1));
}
void Addition(void)//Addition function
{
      float x,sum=0;
    system("cls");
    printf("Welcome to Addition Section.\n");
    printf("-----------------------------\n");
    printf("You will be asked for numbers you want to add.\n");
    printf("-----------------------------------------------\n");
    printf("Enter all the numbers you want to add one by one\n");
    printf("--------------------------------------------------\n");
    printf("Enter 0 after you're done and it will show you the result.\n");
    do
    {
        printf("Enter a number: ");
        scanf("%f", &x);
        sum = sum + x;
    } while (x != 0.0);
    printf("Your result is %.2f",sum);
}
void Substraction(void)//Substraction fumction
{
    float a,b,c,dif1,dif2;
    int z;
    system("cls");
    printf("Enter two integers or decimals:\n");
    scanf("%f%f", &a,&b);
    dif1 = a-b;
    printf("%.2f-%.2f= %.2f\n", a,b,dif1);
    do
    {   
        
        printf("Do you still want to substract something from the result?\nYes(1)\t\t\tNo(0)\n");
        scanf("%d", &z);
        if(z == 1)
        {
            printf("What value do you want to substract: \n" );
            scanf("%f", &c);
            dif2 = dif1-c;
            printf("%.2f -%.2f = %.2f\n", dif1, c, dif2);
            dif1 = dif2;
        }
    
    } while (!(z==0));
}
void Multiplication(void)//Multiplication function
{
  float a,b,p1,p2;
    int n,i;
    system("cls");
    printf("How many numbers do you want to multiply: ");
    scanf("%d", &n);
    printf("Enter an integer or decimal number: \n");
    scanf("%f", &a);
    p1 = a;
    for(i=1;i <=n-1;i++)
    {
        printf("Enter another number: ");
        scanf("%f", &b);
        p2 = p1 * b;
        printf("%.2f * %.2f = %.2f\n", p1,b,p2);
        p1 = p2;
    }
}