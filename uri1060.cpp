#include<stdio.h>

int main()
{
    float i,n;
    int count=0;

    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0)
            count++;
    }
    printf("%d valores positivos",count);

}
