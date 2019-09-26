#include<stdio.h>

void time(int h,int m,int h1,int m1)
{
     int a,b,x;

    a=(h*60)+m;
    b=(h1*60)+m1;
    if(b>=a && b-a>0 && b-a<=1440){
        x=b-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(x-x%60)/60,x%60);
    }
    else if(a>=b && a-b>0 && a-b<=1440){
         b=(24*60)+b;
         x=b-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUT0(S)\n",(x-x%60)/60,x%60);
    }
    else if(a==b)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }


int main()
{
    int h,m,h1,m1,x;
    scanf("%d%d%d%d",&h,&m,&h1,&m1);
    time(h,m,h1,m1);
    return 0;
}
