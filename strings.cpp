#include<iostream>
#include<string.h>
using namespace std;
//strlen(),strcpy(),strcmp(),strrev(),strncmp(),strncpy()
void reverse(){
    char str[5]="Kush";
    int i,j,count;
    j=strlen(str);
    count=j;
    for(i=0;i<count/2;i++){
        char temp=str[i];
        str[i]=str[j-1];
        str[j-1]=temp;
        j--;
    }
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
}

void nconcat(){
    char s1[20]="Kush";
    char s2[10]="Bhasin";
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=strlen(s1);
    int j=0;
    // int size=j;
     while(n>0 && s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
        n--;
    }
    s1[i]='\0';
    cout<<s1;
    
}
void sort(){
    char str[10]="ajay";
    int n=strlen(str);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<str;
}
int main(){
     reverse();
    nconcat();
   sort();
return 0;
}