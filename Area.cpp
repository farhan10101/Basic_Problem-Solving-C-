#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float Area,s,a=3,b=4,c=5;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area "<<Area;
    return 0;

}
