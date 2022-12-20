#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[5][20]={"Kush","Saksham","Jatin","Abhay","Aarshey"};
    int n=5;
    char temp[20];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    
return 0;
}