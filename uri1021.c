#include<stdio.h>

int main()
{
    double x;
    scanf("%lf",&x);

    int y=(int)((x*10)/(10*.25));
    printf("%d",y);
}
