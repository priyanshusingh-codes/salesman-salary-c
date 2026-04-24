//Salesman salary with name, bonus, and commission
#include<stdio.h>
int main()
{
    char name[50];
    int coms;
    float salary, comprice, commission, subtotal, bonus, total;
    printf("Enter salesman's name :\n");
    fgets(name, sizeof(name), stdin);
    printf("Enter the base salary amount:\n");
    scanf("%f", &salary);
    printf("Enter the total of numbers compters are sold\n");
    scanf("%d", &coms);
    printf("Enter the price of each computer\n");
    scanf("%f", &comprice);
    commission = (coms * comprice * 2)/100;
    subtotal = salary + commission;
    
     if( subtotal < 30000)
 bonus = 2000;
else if ( subtotal <= 50000 )
bonus = 5000;
else 
bonus = 8000;
total = subtotal + bonus;
printf(" Your salary is : %.2f\n Your Commission is : %.2f\n Your Bonus is : %.2f\n Your Total Salary is : %.2f\n " ,salary, commission, bonus, total);
    return 0;
}