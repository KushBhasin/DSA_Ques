#include<iostream>
using namespace std;
void missing(int arr[],int p){
    
    for(int i=0;i<p-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff==1)
        continue;
        else cout<<"Missing number:"<<arr[i]+1;
    }
}
int main(){
    int arr[]={11,12,13,14,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    missing(arr,n);
    return 0;
}