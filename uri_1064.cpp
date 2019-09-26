#include<stdio.h>

int main()
{
    int i,count=0;
    float a[6],sum=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
   /* }
    for(i=0;i<6;i++)
    {*/
        if(a[i]>0){
           sum+=a[i];
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
}
