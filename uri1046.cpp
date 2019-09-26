#include<stdio.h>

int main()
{
    int x,y,a,b;
    scanf("%d%d",&x,&y);

    if(y>x){
        a=y-x;
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }
    else if(x>y || x==y){
         y=24+y;
         b=y-x;
        printf("O JOGO DUROU %d HORA(S)\n",b);
    }
    return 0;
}
