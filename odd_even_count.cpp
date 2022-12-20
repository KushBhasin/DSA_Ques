#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int c_even=0,c_odd=0;
    for(int i=0;i<10;i++){
        if((*(arr+i)%2)==0)
        {
            c_even++;
        }
        else c_odd++;
    }
    cout<<c_even<<endl;
    cout<<c_odd;
    return 0;
}