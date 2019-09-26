#include<stdio.h>

int main()
{
    double a,b,c,max;
    scanf("%lf%lf%lf",&a,&b,&c);
     max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;

     if(max==a)
     {
    if(max>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
    if((max*max)==(b*b)+(c*c))
        printf("TRIANGULO RETANGULO\n");
    else if((max*max)>((b*b)+(c*c)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((max*max)<((b*b)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n");
    if(max==b  && max==c)
       printf("TRIANGULO EQUILATERO\n");
    else if(((max==b && b!=c)|| (b==c && c!=max) ||(max==c && c!=b)))
        printf("TRIANGULO ISOSCELES\n");
    }
     }
    else if(max==b)
     {
    if(max>=a+c)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
    if((max*max)==((a*a)+(c*c)))
        printf("TRIANGULO RETANGULO\n");
    else if((max*max)>((a*a)+(c*c)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((max*max)<((a*a)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n");
    if(max==a && max==c)
       printf("TRIANGULO EQUILATERO\n");
    else if((max==a && a!=c)|| (a==c && c!=max)||(max==c && c!=a))
        printf("TRIANGULO ISOSCELES\n");
     }
     }
    else if(max==c)
     {
    if(max>=a+b)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
    if((max*max)==((a*a)+(b*b)))
        printf("TRIANGULO RETANGULO\n");
    else if((max*max)>((a*a)+(b*b)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((max*max)<((a*a)+(b*b)))
        printf("TRIANGULO ACUTANGULO\n");
    if(max==b && max==a)
       printf("TRIANGULO EQUILATERO\n");
    else if((max==b && b!=a)||(b==a && a!=max)||(max==a && a!=b))
        printf("TRIANGULO ISOSCELES\n");
     }
     }

    return 0;
}
