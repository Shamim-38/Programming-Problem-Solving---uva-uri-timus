#include<stdio.h>
#include<math.h>

int myPow(int x,int n)
{
    int i; /* Variable used in loop counter */
    int number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}
int main()
{
    int n,i,k;
    //if(n<5 && n>2000)
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ^ 2 = %d\n",i,myPow(i,2));
    }
}
