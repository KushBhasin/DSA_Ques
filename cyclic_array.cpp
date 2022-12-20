#include<iostream>
using namespace std;
void cycle(int arr[5],int p,int size){
    while(p--){
        int temp=arr[size-1];
         for(int i=size-1;i>=1;i--){
            arr[i]=arr[i-1];
         }
         arr[0]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    int arr[]={1,2,3,4,5};
     int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number of rotations:";
    cin>>n;
    cycle(arr,n,size);
    return 0;
}
