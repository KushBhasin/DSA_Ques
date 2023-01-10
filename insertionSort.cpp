// Time Complexity: O(n^2), best case is O(n)
// Space Complexity is O(1)
// It is a stable algorithm and in place
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={5,2,1,8,9};
    insertionSort(arr,5);
    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}