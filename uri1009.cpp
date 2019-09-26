#include<stdio.h>

int main()
{
    char name[10];
    double salary,sell,i;
    gets(name);
    scanf("%lf %lf",&salary,&sell);
    i=(sell*.15)+salary;
    printf("TOTAL = R$ %0.2lf\n",i);
    return 0;
}
