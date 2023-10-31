#include<stdio.h>
#include<math.h>
void main()
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