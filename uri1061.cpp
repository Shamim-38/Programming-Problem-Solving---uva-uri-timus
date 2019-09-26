#include <iostream>
#include <stdio.h>
using namespace std;
//Aluno: Dennis Daniliszyn Exercicio: URI - 1061
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    string s;
    cin>>s>>d1>>h1>>s>>m1>>s>>s1;
    cin>>s>>d2>>h2>>s>>m2>>s>>s2;

    int q1,q2;
    int temp;
    q1=s1+m1*60+h1*60*60+d1*60*60*24;
    q2=s2+m2*60+h2*60*60+d2*60*60*24;
    temp=q2-q1;

    printf("%d dia(s)\n",temp/(60*60*24));
    temp=temp%(60*60*24);
    printf("%d hora(s)\n",temp/(60*60));
    temp=temp%(60*60);
    printf("%d minuto(s)\n",temp/(60));
    temp=temp%60;
    printf("%d segundo(s)\n",temp);

    return 0;

}
