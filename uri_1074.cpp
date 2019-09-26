#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        if(j==0)
            printf("NULL\n");
        else if(j%2==0 && j>0)
            printf("EVEN POSITIVE\n");
        else if(j%2==0 && j<0)
            printf("EVEN NEGATIVE\n");
        else if(j%2!=0 && j>0)
            printf("ODD POSITIVE\n");
        else if(j%2!=0 && j<0)
            printf("ODD NEGATIVE\n");

    }
}
