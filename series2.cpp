#include<iostream>
using namespace std;
int main()
{

    int n1,n2,sum=0,a=1,b=2;
    cin>>n1>>n2;
    while(a<=n1 && b<=n2)
    {

        sum=sum+a*b;
        a=a+1;
        b=b+1;

    }
    cout<<sum;
    return 0;

}
