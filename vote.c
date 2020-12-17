#include<stdio.h>
int main()
{
int age;
printf("Enter the age of citizen:");
scanf("%d",&age);
if(age>=18)
{
    printf("Citizen is eligible for voting.");
}
else
{
   printf("Citizen is not eligible for voting.");
}
return 0;
}