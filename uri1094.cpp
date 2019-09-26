#include<stdio.h>

int main()
{
    int N,i, Amount,c_a=0,r_a=0,s_a=0,t=0;
    char b;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %c",&Amount,&b);
        if(b=='C'){
            c_a +=  Amount;
        }else if(b=='R'){
            r_a +=  Amount;
        }else if(b=='S'){
            s_a +=  Amount;
        }
        t +=  Amount;
    }
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c_a);
    printf("Total de ratos: %d\n",r_a);
    printf("Total de sapos: %d\n",s_a);
    printf("Percentual de coelhos: %.2f %c\n",(float)(c_a*100)/t,37);
    printf("Percentual de ratos: %.2f %c\n",(float)(r_a*100)/t,37);
    printf("Percentual de sapos: %.2f %c\n",(float)(s_a*100)/t,37);



}
