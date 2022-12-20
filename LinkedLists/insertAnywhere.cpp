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

void insertAtHead(Node* & head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node * temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node * temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAnywhere(Node* &head, Node * &tail,int pos, int d){
    //Insertion at start
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    Node * temp;
    int count=1;
    temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    //insert At last
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node * insertNode=new Node(d);
    insertNode->next=temp->next;
    temp->next=insertNode;


}

void deletion(Node * &head, int pos){
    //Deleting first node
    if(pos==1){
        Node * temp = head;
        head=head->next;
        temp->next =NULL; // Free up memory
        delete temp;
    }
    else{
        //Deleting at any other position including at last
        Node * curr=head;
        Node * prev= NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}
int main(){
    Node * node1= new Node(10);
    Node * head= node1;
    Node * tail= node1;
    print(head);
    insertAtTail(tail,8);
    insertAtHead(head,5);
    print(head);
    insertAnywhere(head,tail,2,1);
    insertAnywhere(head,tail,5,2);
    print(head);
    deletion(head,1);
    cout<<"After Deletion:";
    print(head);
    cout<<"Head is: "<<head->data<<endl;
    cout<<"Tail is: "<<tail->data;
    return 0;
}