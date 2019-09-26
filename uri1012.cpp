#include<stdio.h>
#include<math.h>


int main()
{
    double A,B,C,pi=3.14159,t,c,t1,q,r;
    scanf("%lf%lf%lf",&A,&B,&C);
    t=.5*(A*C);
    c=pi*pow(C,2);
    t1=.5*(A+B)*C;
    q=pow(B,2);
    r=A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,c,t1,q,r);


}
