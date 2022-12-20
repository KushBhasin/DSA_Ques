#include<iostream>
using namespace std;

int sort(int arr[],int n){
    int count[n]={0};
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    for(int j=0;j<n;){                                                                                     
        if(count[j]==0)
        j++;
        else{
            cout<<j<<" ";
            count[j]--;
        }
    }
}
int main(){
    int arr[]={2,3,4,1,5,3,1};
    sort(arr,7);
    return 0;
}