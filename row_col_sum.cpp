#include<iostream>
using namespace std;
int col_sum(int arr[][3],int p,int q){
    cout<<"Column sum:"<<endl;
    for(int j=0;j<q;j++){
        int sum=0;
        for(int i=0;i<p;i++){
            sum+= (*(*(arr+i)+j));
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
int row_sum(int arr[][3],int p,int q){
    cout<<"Row sum:"<<endl;
    for(int i=0;i<p;i++){
        int sum=0;
        for(int j=0;j<q;j++){
            sum+= (*(*(arr+i)+j));
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    col_sum(arr,3,3);
    row_sum(arr,3,3);
    return 0;
}