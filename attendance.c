#include<stdio.h>
#include<stdlib.h>
void EPhys(void);
void Maths(void);
void CTSD(void);
void OSS(void);
void CS(void);
void ES(void);
void PhyLab(void);
void CTSDLab(void);
void OssLab(void);
void main(void)
{
    int n;

    printf("Welcome to ATTENDANCE CLACULATOR for CSE-2 division\n");
    printf("----------------------------------------------------\n");
    printf("It tells you how many classes you have as well as how many you can still skip or not\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Enter the number corresponding to each subject as mentioned below\n");
    printf("1. E-Phys\n2. Maths\n3. CTSD\n4. OSS\n5. CS\n6. ES\n7.EPhy-LAB\n8.CTSD-LAB\n9.OSS-LAB\n");
    do 
    {
        printf("The number: ");
        scanf("%d", &n);
    } while (!(n>=1 && n<=9));
    switch (n)
    {
    case 1:
        EPhys();
    case 2:
        Maths();
        break;
    case 3:
        CTSD();
        break;
    case 4:
        OSS();
        break;
    case 5:
        CS();
        break;
    case 6:
        ES();
        break;
    case 7:
        PhyLab();
        break;
    case 8:
        CTSDLab();
        break;
    case 9:
        OssLab();
        break;
    default:
        printf("Please enter number between 1 and 9");
        break;
    }
    
}
void EPhys(void)
{
    int n,w,t = 9;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void Maths(void)
{
    int n,w, t = 12;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void CTSD(void)
{
    int n,w, t = 5;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void OSS(void)
{
    int n,w, t = 3;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void CS(void)
{
    int n,w, t = 3;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void ES(void)
{
    int n,w, t = 2;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void CTSDLab(void)
{
    int n,w, t = 3;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void PhyLab(void)
{
     int n,w, t = 3;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}
void OssLab(void)
{
     int n,w, t = 3;
    system("cls");
    printf("How many classes have you skipped?\n");
    scanf("%d", &n);
    w = t-n;
    if(n<t)
        printf("You are safe.\nYou can still skip %d classes", w);
    else if(n == t)
        printf("You are safe but you cannot skip anymore classes.\n");
    else
        printf("You have skipped more classes than you could. Only God or your Professor can save you now.");
}