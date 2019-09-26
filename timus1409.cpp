#include<stdio.h>

int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int total=(a+b)-1;

        printf("%d %d",total-a,total-b);
    }
    return 0;
}
