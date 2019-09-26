#include<stdio.h>

int main()
{
    int a,i,array[100],max=0;
    for(i=0;i<100;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
          max=array[i];
    }
        printf("%d\n",max);
    for(i=0;i<100;i++)
    {
        if(array[i]==max)
          a=i;
    }
    printf("%d\n",a+1);
}
