#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0;
    int n,value=0;
    cin>>n;
    while(n!=0){
        if(n%10==1){
            value+=pow(2,i);
        }
        n/=10;
        i++;
    }
    cout<<value;
}