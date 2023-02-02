#include<stdio.h>
int main()
{
    float sales, commission, earnings;
    while(sales>=0)
    {
        printf(" Enter sales in pounds[-1 to end]:");
        scanf("%f",&sales);
        if(sales == -1)
        break;

    commission = sales/100*9;
    earnings = commission + 200;
    printf("Salary is: %.1f\n",earnings);
    }
    return 0;
}
