#include<stdio.h>
int main()
{
double number;
printf("enter a number:");
scanf("%1f",&number);
if(number <=0.0)
{
if(number == 0.0)
printf("you entered 0.");
else
orintf("you entered a negative number.");
}
else 
printf("you entered a positive number.");
return 0;
}
