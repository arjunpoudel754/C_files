
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include "employee.h"
#define MAX 100
#define MAX_Employees 100

struct Employee{
    char id[13];
    char name[MAX];
    char phone[15];
    char address[MAX];
    char email[MAX];   
}employees[MAX_Employees];
void AddEmployee(struct Employee employees[],int *employee_count)
{
    system("cls");
    if(*employee_count < MAX_Employees){
        clearbuffer();
        printf("Enter Employee ID: ");
        fgets(employees[*employee_count].id,sizeof(employees[*employee_count].id),stdin);
            rmnewline(employees[*employee_count].id);

        printf("Enter name: ");
        fgets(employees[*employee_count].name,sizeof(employees[*employee_count].name),stdin);
            rmnewline(employees[*employee_count].name);

        printf("Enter phone: ");
        fgets(employees[*employee_count].phone,sizeof(employees[*employee_count].phone),stdin);
            rmnewline(employees[*employee_count].phone);
        
        printf("Enter address: ");
        fgets(employees[*employee_count].address,sizeof(employees[*employee_count].address),stdin);
            rmnewline(employees[*employee_count].address);
        
        printf("Enter email: ");
        fgets(employees[*employee_count].email,sizeof(employees[*employee_count].email),stdin);
            rmnewline(employees[*employee_count].email);
        system("cls");
        printf("Information added successfully.\n\n");
        
        (*employee_count)++;
    }
    else{
        printf("Employee list full.\nDelete someone to add more\n\n");
    }
}

void SearchEmployee(struct Employee employees[],int employee_count){
    char searchID[MAX];
    int i,count=0;
    clearbuffer();
    printf("Enter Employee id: ");
    fgets(searchID,sizeof(searchID),stdin);
    rmnewline(searchID);
    for(i=0;i<employee_count;i++)
    {        
        if(strcmp(searchID,employees[i].id) == 0)
        {

            printf("**Employee found!\n");
            printf("ID      : %s\n",employees[i].id);
            printf("Name    : %s\n",employees[i].name);
            printf("Phone   : %s\n",employees[i].phone);
            printf("Address : %s\n",employees[i].address);
            printf("Email   : %s\n\n",employees[i].email);
            count++;
            break;
        }
    }
    if(!count){
        printf("Employee not found\n\n");
    }
}

void DeleteEmployee(struct Employee employees[],int *employee_count){
    char Deleteid[MAX];
    int count = 0,confirm,i,j;
    clearbuffer();
    printf("Enter the Employee id: ");
    fgets(Deleteid,sizeof(Deleteid),stdin);
    rmnewline(Deleteid);
    for(i=0;i<*employee_count;i++)
    {
        if(strcmp(Deleteid,employees[i].id) == 0)
        {
            printf("Employee found\n");
            printf("Are you sure you want to delete this employee\n");
            printf("1.Yes               2.No\n");
            scanf("%d",&confirm);
            if(confirm == 1)
            {
                printf("Employee deleted\n");
                for(j = i;j< *employee_count;j++)
                {
                    employees[j] = employees[j+1];
                }
                (*employee_count)--;
            }
            else{
                printf("Employee not deleted.\n");
            }
            count++;
            
        }
    }
    if(!count){
        printf("Employee not found.\n");
    }
}

void DisplayEmployee(struct Employee employees[],int employee_count){
    if(employee_count == 0){
        printf("No Employees added\n");
    }
    else{
            printf("Sr. No.\t\tID\t\tName\t\tPhone\t\tAddress\t\tEmail\n");
        for(int i=0;i<employee_count;i++)
        {
            printf("%d\t\t",i+1);
            printf("%s\t\t",employees[i].id);
            printf("%s\t\t",employees[i].name);
            printf("%s\t\t",employees[i].phone);
            printf("%s\t\t\t",employees[i].address);
            printf("%s\n",employees[i].email);
        }
        printf("\n");
    }
}

int  main(){
    int choice,employee_count=0;
  //struct Employee employees[MAX_Employees];
    system("cls");
    do
    {
        printf("Employee Management System\n");
        printf("1.Add Employee\n");
        printf("2.Search Employee\n");
        printf("3.Delete Employee\n");
        printf("4.Display Employee\n");
        printf("5.Exit\n");
        printf("Enter choice: ");
        if(scanf("%d",&choice) != 1){
        int c;
        choice = c;
        while((c = getchar()) != '\n' && c != EOF){}
        }
        switch (choice)
        {
        case 1:
            AddEmployee(employees,& employee_count);
            break;
        case 2:
            SearchEmployee(employees,employee_count);
            break;
        case 3:
            DeleteEmployee(employees,&employee_count);
            break;
        case 4:
            DisplayEmployee(employees,employee_count);
            break;
        case 5:
            printf("Exiting System\n");
            break;
        default:
            printf("Invalid Input!Please Try again.\n\n");
            break;
        }
    } while (choice != 5);
    return 0;
}


