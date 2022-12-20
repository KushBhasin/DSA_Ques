#include<iostream>
using namespace std;

int mergesort(int arr[],int beg, int mid, int end){
    int n1=mid-beg+1;
    int n2=end-mid;
    int Larr[n1], Rarr[n2];
    for(int i=0;i<n1;i++){
        Larr[i]= arr[beg+i];
    }
    for(int j=0;j<n2;j++){
        Rarr[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=beg;
    while(i<n1 && j<n2){
        if(Larr[i]<=Rarr[j]){
            arr[k]=Larr[i];
            i++;
        }
        else {
            arr[k]=Rarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=Larr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=Rarr[j];
        j++;
        k++;
    }
   

    return 0;
}

int main(){
    int arr[]={2,4,6,1,8,3,9,5};
    int l=0,h=8,mid;
    mid=(l+h)/2;
    mergesort(arr,l,mid,h);

    return 0;
}
