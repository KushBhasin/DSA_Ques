// Using Brute force to find maximum contiguous subarray sum
// TC is O(n^2)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={5,2,-1,9,-4};
//     int n=5;
//     int sum=0;
//     int maxi=0;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             cout<<"Sum of each subarray is: "<<sum<<endl;
//             maxi= max(maxi,sum);
//         }
//     }
//     cout<<"Maximum Subarray sum: "<<maxi;
//     return 0;
// }
//**********************************************************************************************************
// Kadane Algorithm with TC O(n).
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,2,-1,9,-4};
    int n=5;
    int maxi=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        maxi= max(sum,maxi);
        if(sum<0)
        sum=0;
    }
    cout<<"Maximum Subarray sum: "<<maxi;
    return 0;
}