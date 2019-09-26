#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);

    float z,y;
    if(X==1)
    printf("Total: R$ %.2f\n",(float)(Y*4));
    else if(X==2){
    printf("Total: R$ %.2f\n",4.50*(float)Y);
    }
    else if(X==3)
    printf("Total: R$ %.2f\n",5*(float)Y);
    else if(X==4)
    printf("Total: R$ %.2f\n",2*(float)(Y));
    else if(X==5)
    printf("Total: R$ %.2f\n",(1.50*(float)Y));
    return 0;
}
