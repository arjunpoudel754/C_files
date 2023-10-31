#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Addition();
int main(void) {
    int choice, i, a, b;
    float x, y, result;
    system("cls");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
    printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
    printf("12. 10 ^ X\n13. X!\n14. %%\n15. log(x)\n16. Modulus\n");
    printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
    printf("21. Cot(X)\n22. Sec(X)\n");
    do{
    printf("Choice: ");
    scanf("%d", &choice);
    }while(!(choice >= 1 && choice <= 22));
    switch (choice)
    {
    case 1:
        Addition();
        break;
    
    default:
        break;
    }
}
void Addition(){
    int n,sum=0;
    do{
        printf("Enter an integer: ");
        scanf("%d", &n);
        sum += n;
    }while(n != 0);
    printf("Your answer is %d\n",sum);
}