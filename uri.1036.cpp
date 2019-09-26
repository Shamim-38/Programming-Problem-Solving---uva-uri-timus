#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x1,x2,i,k;
    int j;
    scanf("%f%f%f",&a,&b,&c);
    i=2*a;
    j=(int)(pow(b,2)-(4*a*c));

    if(i!=0 && j>0)
    {
    x1=(-b+pow(((b*b)-(4*a*c)),(.5)))/(2*a);
    x2=(-b-pow(((b*b)-(4*a*c)),(.5)))/(2*a);

        printf("R1 = %0.5f\n",x1);
        printf("R2 = %0.5f\n",x2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
