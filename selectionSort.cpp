// Time Complexity- O(n^2) for all cases
// Space Complexity- O(1)
// Best for sorting small list of elements
// Unstable sorting algorithm but may be converted to stable by inserting in place of swapping!
//Hint: Swap the elements from starting with the smallest in the remaining array
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){           // Last element is already sorted and there is not element later, so n-1 used
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

}

int main(){
    int arr[]={2,5,1,7,9,8,2};
    selectionSort(arr,7);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}