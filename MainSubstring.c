#include<stdio.h>
#include<string.h>
int main(){
    char main[200],sub[200];
    int position,l1,l2,i;
    printf("Enter Main string: ");
    gets(main);
    printf("Enter Sub string: ");
    gets(sub);
    printf("Enter the position to insert: ");
    scanf("%d",&position);
    l1 = strlen(main);
    l2 = strlen(sub);
    for(i = position;i<l1;i++)
    {
        main[position +l2] = main[i];
    }
    for(i = 0;i<l2;i++)
    {
        main[position +i] = sub[i];
    }
    puts(main);
    return 0;
}
