#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    // while(i<n){
    //     int j=1;
    //     while(j<=n){                              Pattern is like:
    //         cout<<j<<" ";                         1 2 3
    //         j++;                                  1 2 3
    //     }                                         1 2 3
    //     i++;
    //     cout<<endl;
    // }
    //---------------------------
    // while(i<n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //---------------------------
    // int val=1;
    // while(i<n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<val<<" ";
    //         val++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    //--------------------------
    // while(i<n){
    //     int j=1;
    //     while(j<=i+1){
    //         cout<<"*"<<" ";              *
    //         j++;                         * *
    //     }                                * * *
    //     cout<<endl;
    //     i++;
    // }
    //-------------------------
    // while(i<n){
    //     int j=1;
    //     while(j<=i+1){
    //         cout<<i+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //------------------------
    // int val=1;
    // while(i<n){
    //     int j=1;
    //     while(j<=i+1){                            
    //         cout<<val<<" ";
    //         val++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //-----------------------
    // while(i<n){
    //     int j=1;
    //     int val=0;
    //     while(j<=i+1){
    //         cout<<i+1+val<<" ";
    //         val++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //--------------------------
    // while(i<n){
    //     int j=1;
    //     int val=i+1;
    //     while(j<=i+1){
    //         cout<<val<<" ";
    //         val--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //-------------------------
    // int val=65;
    // while(i<n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<char(val)<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    //     val++;
    // }
    //------------------------------
    // int val=65;
    // while(i<n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<char(val)<<" ";
    //         j++;
    //         val++;
    //     }
    //     i++;
    //     cout<<endl;
        
    // }
    //------------------------------
    // int val=65;
    // while(i<n){
    //     int j=1;
    //     while(j<=n-i-1){
    //         cout<<" "<<" ";
    //         j++;
    //     }
    //     while(j<=n){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //-------------------------------
    // while(i<n){
    //     int j=1;
    //     while(j<=n-i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //----------------------------------
    // while(i<n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<" "<<" ";
    //         j++;
    //     }
    //     while(j<=n){
    //         cout<<j<< " ";
    //         j++;
    //          }
    //          cout<<endl;
    //          i++;
    // }
    //----------------------------------
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//     while(i<n){
//         int val=1;
//         int j=1;
//         while(j<=n-i-1){
//             cout<<" "<<" ";
//             j++;
//         }
//         while(j<=n){
//             cout<<val<<" ";
//             val++;
//             j++;
//         }
//         while(val-2>0){
//             cout<<val-2<<" ";
//             val--;

//         }
//         cout<<endl;
//         i++;
//     }
//--------------------------------------
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 
while(i<n){
    int j=1;
    // int start=n-i;
    while(j<=n-i){
        cout<<j<<" ";
        j++;
    }
    while(j<=n){
        cout<<"*"<<" ";
        j++;
    }
    j=1;
    while(j<=i){
        cout<<"*"<<" ";
        j++;
    }
    while(j<=n){
        cout<<n-j+1<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
    return 0;
}