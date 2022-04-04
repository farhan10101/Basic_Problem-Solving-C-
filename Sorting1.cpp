#include<bits/stdc++.h>
using namespace std;
int main(){
int a=3,b=4;

int arr[]={4,5,6,2,4};
cout<<"before\n";
for(int i=0;i<5;i++){

    cout <<arr[i]<<"";
    }
    cout<<"\n";
    sort(arr,arr+5);

    cout<<"after \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"";

    }

return 0;

}
