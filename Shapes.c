#include<stdio.h>
#include<math.h>
void Rectangle(void);
void Square(void);
void Cylinder(void);
void main()
{
    int n;
    printf("1.Rectangle\t2.Square\t3.Cylinder\n");
    printf("What do you want to calculate: ");
    scanf("%d ", &n);
    switch (n)
    {
        case 1:
            Rectangle();
            break;
        case 2:
            Square();
            break;
        case 3:
            Cylinder();
            break;
    }
}
void Rectangle(void)
{
    int l,b,A,P;
    float D,L;
    printf("Enter lenght and width: ");
    scanf("%d%d", &l,&b);
    A = l*b;
    P = (2*l) + (2*b);
    L = (l*l)+(b*b);
    D = sqrt(L);
    printf("Area = %d\n",A);
    printf("Parameter = %d\n",P);
    printf("Diagonal = %f\n",D);
}
void Square(void)
{
     int l,A,P;
    float D,L;
    printf("Enter lenght ");
    scanf("%d",&l);
    A = l*l;
    P = (4*l);
    L = 2*(l*l);
    D = sqrt(L);
    printf("Area = %d\n",A);
    printf("Parameter = %d\n",P);
    printf("Diagonal = %f\n",D);
}
void Cylinder(void)
{
    const float pi = 3.14;
    int r,h;
    float Area,Volume;
    printf("Enter radius and height: ");
    scanf("%d%d", &r, &h);
    Area =2*pi*r*(r+h);
    Volume = pi*r*r*h;
    printf("Area = %.2f\n", Area);
    printf("Volume = %.2f\n", Volume);
}