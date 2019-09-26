#include<stdio.h>

int main()
{
    float n,a,b,c;
    scanf("%f",&n);
    if(n>0 && n<2000.00)
    {
        printf("Isento\n");
    }
    else if(n>2000.00)
    {
        if(n<=3000.00)
        {
            n=n-2000;
            n=n*.08;
        }
        else if(n<=4500.00)
        {
            n=n-2000;
            a=1000*.08;
            b=(n-1000)*.18;
            n=a+b;
        }
        else if(n>4500.00)
        {
            n=n-2000;
            a=1000*.08;
            b=1500*.18;
            c=(n-2500)*.28;
            n=a+b+c;
        }
         printf("R$ %.2f\n",n);
    }

    return 0;

}
