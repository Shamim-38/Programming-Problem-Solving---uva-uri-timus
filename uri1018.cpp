#include<stdio.h>

int main()
{
    long int digit,h,f,t,t1,t2,f1,o;
    scanf("%d",&digit);
    printf("%d",digit);

    h=digit/100;
    digit=digit-(100*h);
    f=digit/50;
    digit=digit-(50*f);
    t=digit/20;
    digit=digit-(20*t);
    t1=digit/10;
    digit=digit-(10*t1);
    f1=digit/5;
    digit=digit-(5*f1);
    t2=digit/2;
    digit=digit-(2*t2);
    o=digit/1;
    printf("%d nota(s) de R$ 100,00\n",h);
    printf("%d nota(s) de R$ 50,00\n",f);
    printf("%d nota(s) de R$ 20,00\n",t);
    printf("%d nota(s) de R$ 10,00\n",t1);
    printf("%d nota(s) de R$ 5,00\n",f1);
    printf("%d nota(s) de R$ 2,00\n",t2);
    printf("%d nota(s) de R$ 1,00\n",o);
    return 0;
}
