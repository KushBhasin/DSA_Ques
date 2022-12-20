#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val=this ->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory Free at node of value "<<val<<endl;
    }
};
void insertAtHead(Node* &tail, Node * &head,int d){
    if(head==NULL){
        Node * temp= new Node(d);
        head= temp;
        tail=temp;
    }
    else{
    Node * temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertAtTail(Node * &tail,Node* & head,int d){
    if(tail==NULL){
        Node * temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else{

    Node * temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtAnyPosition(Node * &tail, Node * &head,int pos,int d){
    if(pos==1){
        insertAtHead(tail, head,d);
        return;
    }
    else{
        int cnt=1;
        Node * temp=head;
    
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
            }    
            if(temp->next==NULL){
                insertAtTail(tail,head,d);
                return;
            }
        Node * insertNode = new Node(d);
        insertNode->next=temp->next;
        insertNode->prev = temp;
        temp->next->prev=insertNode;
        temp->next=insertNode;

        }
}
void print(Node * head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node * & head, int pos){
    if(pos==1){
        Node * temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node * curr=head;
        Node * prev =NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next->prev=prev;
        curr->next=NULL;
        delete curr;
    }

}
int main(){
    // Node * node1=new Node(10);
    Node * head= NULL;
    Node * tail= NULL;
    // print(head);
    insertAtHead(tail, head,20);
    print(head);
    insertAtHead(tail,head,30);
    print(head);
    insertAtTail(tail,head,40);
    print(head);
    insertAtAnyPosition(tail,head,2,50);
    print(head);
    insertAtAnyPosition(tail,head,5,100);
    print(head);
    deleteNode(head,4);
    print(head);
    
    return 0;
}