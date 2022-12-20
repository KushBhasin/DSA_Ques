#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,6,1,8,3,9,5};
    bubble_sort(arr,8);
    return 0;
}