#include<stdio.h>

int main()
{
    double a,b,c,x,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=(a+b+c);
    y=((a+b)*c)/2;

    if(a+b>c && b+c>a && a+c>b)
        printf("Perimetro = %.1lf\n",x);
    else
        printf("Area = %.1lf\n",y);
    return 0;
}
