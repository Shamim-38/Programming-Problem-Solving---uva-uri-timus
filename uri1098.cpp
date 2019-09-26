#include<stdio.h>
int main(){

float i,j,a=1;

   for(i=0;i<2.20;i+=.20){
   for(j=a;j<=a+2;j++){
        if(i==0){
            a=(int)a;
            i=(int)i;
            j=(int)j;
            printf("I=%d J=%d\n",i,j);
        }
        i=(float)i;
        j=(float)j;
    if(i!=0)
   printf("I=%.1f J=%.1f\n",i,j);
    }
    a=(float)a;
   a+=.20;
   }
}

