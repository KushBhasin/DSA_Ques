#include<iostream>
using namespace std;

void separate(int arr[],int n){
    int temp=0;
    for(int i=0,j=0;i<n;j++){
        if(arr[i]<0){
            cout<<arr[i];
            i++;
            j++;
        }
        else {
            if(arr[j]<0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j=i;
            }

        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }

}
int main(){
    int arr[]={-1,-4,2,5,-6,8};
    separate(arr,6);
    return 0;
}