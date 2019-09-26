#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,mx;
    cin>>a>>b>>c;
    mx=(a+b+abs(a-b))/2;
    cout<<mx<<"good";
    return 0;
}
