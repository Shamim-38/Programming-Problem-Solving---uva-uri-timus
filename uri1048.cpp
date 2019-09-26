#include<stdio.h>


int main()
{
    float s,bonus;
    int d;
    char b= '%';
    scanf("%f",&s);
    if(s<=400)
    {
        d=15;
        bonus=s*.15;
        s=s+(s*.15);

    }
    else if(s>400.00 && s<=800.00)
    {
        d=12;
        bonus=s*.12;
        s=s+(s*.12);

    }
    else if(s>800.00 && s<=1200.00)
    {
        d=10;
        bonus=s*.10;
        s=s+(s*.10);

    }
    else if(s>1200.00 && s<=2000.00)
    {
        d=7;
        bonus=s*.07;
        s=s+(s*.07);

    }
    else if(s>2000)
    {
        d=4;
        bonus=s*.04;
        s=s+(s*.04);

    }
    printf("Novo salario: %.2f\n",s);
    printf("Reajuste ganho: %.2f\n",bonus);
    printf("Em percentual: %d %c\n",d,b);
    return 0;

}
