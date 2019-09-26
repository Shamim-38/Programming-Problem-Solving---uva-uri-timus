#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<12;i++)
    {
        n+=1;
        if(n%2!=0)
         printf("%d\n",n);
    }
}
