#include<stdio.h>
int main()
{
    int sal=0,a;
    printf("Enter the salary of Employee:");
    scanf("%d",&sal);
    printf("Enter 1 if the employee smokes and 2 if the employee is a non smoker:");
    scanf("%d",&a);
    if(a==1)
    {
        if(sal<=10000)
        {
            sal=sal-((10*sal)/100);
            printf("Your 10%% salary has been deducted as you are a smoker\n");
            printf("%d is your revised salary",sal);
        }
        else
        {
            sal=sal-((15*sal)/100);
              printf("Your 15%% salary has been deducted as you are a smoker\n");
            printf("%d is your revised salary",sal);
        }
        
    }
    else
    {
        if(sal<=10000)
        {
            sal=sal+((10*sal)/100);
              printf("Your 10%% salary has been increased as you are a non smoker\n");
            printf("%d is your revised salary",sal);
        }
        else
        {
            sal=sal+((15*sal)/100);
              printf("Your 15%% salary has been increased as you are a non smoker\n");
            printf("%d is your revised salary",sal);
        }
        
    }
    

}