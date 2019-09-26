#include<stdio.h>

int main()
{
    int n,i,k,count=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if(k>=10 && k<=20)
            count++;
    }
    printf("%d in\n",count);
    printf("%d out\n",n-count);

}
