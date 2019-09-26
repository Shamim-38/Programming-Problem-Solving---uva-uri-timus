#include<stdio.h>

int main()
{
    int i,m,n,c=0;
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("d%",c);
    }
    else if(m>n){
    for(i=n+1;i<m;i++)
    {
         if(i%2==1 || i%2==-1){
            c+=i;
        }
    }
    printf("%d\n",c);
    }
    else if(m<n){
    for(i=m+1;i<n;i++)
    {
         if(i%2==1 || i%2==-1){
            c+=i;
        }
    }
    printf("%d\n",c);
    }

}
