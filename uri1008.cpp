#include<stdio.h>

int main()
{
    int number,salary;
    float hours;
    scanf("%d %d %f",&number,&salary,&hours);
    printf("NUMBER = %d\n",number);
    //hours=salary*hours;
    printf("SALARY = U$ %.2f\n",salary*hours);
    return 0;
}
