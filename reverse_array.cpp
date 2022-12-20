#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int p=size;
    for(int i=0;i<=p/2;i++){
        int temp=arr[i];
        arr[i]=arr[p-1];
        arr[p-1]=temp;
        p--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}