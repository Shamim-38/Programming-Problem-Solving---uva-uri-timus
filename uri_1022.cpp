#include<stdio.h>

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,n1,n2,d1,d2,a,b,i,min;
    char c,op;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c %d %c %d %c %d",&n1,&c,&d1,&op,&n2,&c,&d2);
        if(op=='/')
        {
            a=n1*d2;
            b=d1*n2;
            printf("%d / %d = ",a,b);
            min=gcd(a,b);
            if(min<0)
            min=-1*min;///(avoiding a / -b)for example input test 1/2-3/4
            printf("%d %c %d\n",a/min,'/',b/min);

        }
        else
        {
        if(op=='*')
        {
            a=n1*n2;
            b=d1*d2;
        }
        else if(op=='-')
        {
            a=(n1*d2)-(n2*d1);
            b=d1*d2;
        }
        else
            a=(n1*d2)+(n2*d1);
            b=d1*d2;
        printf("%d / %d = ",a,b);
        min=gcd(a,b);
        if(min<0)
        min=-1*min;///(avoiding a / -b)for example input test 1/2-3/4
        printf("%d %c %d\n",a/min,'/',b/min);


        }


}
}
/*int main(){
    int n, a, b, c, d;
    char op;
    int max, min, res;

    scanf("%d\n",&n);
    for(int i = 0; i < n; i++){
            scanf("%d / %d %c %d / %d",&a,&b,&op,&c,&d);
            if(op == '/'){
                  max = b*c;
                  res = a*d;
                  printf("%d/%d = ",res,max);
                  min = mdc(res,max);
                  printf("%d/%d\n",res/min,max/min);
            }
            else{
                 max = b*d;
                 if(op == '+') res = a*(max/b) + c*(max/d);
                 else if(op == '-') res = a*(max/b) - c*(max/d);
                 else if(op == '*') res = a*c;
                 printf("%d/%d = ",res,max);
                 min = mdc(res,max);
                 if(min < 0) min = -1*min;
                 printf("%d/%d\n",res/min,max/min);
            }
    }*/

//}
