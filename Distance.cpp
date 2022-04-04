#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double Distance,x1,y1,x2,y2;
    cout<<"Enter first point\n";
    cin>>x1>>y1;
    cout<<"Enter second point\n";
    cin>>x2>>y2;
    Distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)*1.0);
    cout<<"distance ="<<Distance;
    return 0;

}

