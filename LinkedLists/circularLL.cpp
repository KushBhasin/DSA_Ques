#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insert(Node* &tail,int element,int d ){
    if(tail==NULL){
        Node * newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node * curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;


    }

}
 void print(Node * tail){
        Node * temp=tail;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!= tail);
        cout<<endl;

    }
    void deletion(Node * &tail,int val){
        if(tail==NULL){
            cout<<"Underflow!";
        }
        else{
            Node * prev=tail;
            Node* curr=prev->next;
            while(curr->data!=val){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            if(tail==curr){
                tail=prev;
            }
            curr->next=NULL;
            delete curr;


        }
    }

int main(){
    Node * tail=NULL;
    insert(tail,4,2);
    print(tail);
    insert(tail,2,5);
    print(tail);
    insert(tail,5,1);
    print(tail);
    insert(tail,2,4);
    print(tail);
    deletion(tail,2);
    print(tail);
    return 0;
}