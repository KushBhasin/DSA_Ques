#include<iostream>
using namespace std;
void search(int arr[],int size,int key){
    int l=0, h=size, mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key){
            cout<<"Element found at index: "<<mid;
            break;
        }else
        if(arr[mid]>key){
            h=mid-1;
        }
        else l=mid+1;
    }
   
}
int main(){
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element to search: ";
    cin>>n;
    search(arr,s,n);
    return 0;
}