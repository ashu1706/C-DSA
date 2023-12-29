#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node* prev;

Node(int d){
    this-> data= d;
    this-> next=NULL;
    this->prev= NULL;

}
~Node(){
    int val= this-> data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
    cout<< "Memory is free for the node"<< val << endl;
}
};

void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next=head;
    head-> prev = temp->next;
    head=temp;
}

void insertAtTail(Node* tail, int data){
    Node* temp= new Node(data);
    tail-> next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node*head, int position, int data){
    Node* nodeinsert=new Node(data);
    Node* p= head;
    int cnt=1;
    while(cnt <position-1){
        p=p->next;
        cnt++;

    }
    nodeinsert->next= p->next;
    p->next->prev=nodeinsert;
    p->next=nodeinsert;
    nodeinsert-> prev=p;

    }

// deletion
void deleteNode(Node* &head, int position){
    if(position==1){
       Node* temp = head;
       temp->next->prev=NULL;
        head=temp->next;
       temp->next=NULL;
       delete temp;
    }
    else{
         Node* curr=NULL;
        Node* pre= NULL;
        int cnt=1;
        while(cnt < position){
      pre=curr;
      curr= curr->next;
      cnt++;
        }
        curr->prev=NULL;
         pre-> next=curr->next;
         curr->next=NULL;
      
        delete curr;
    }
}
void print(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
     cout<< temp-> data<<" ";
     temp= temp-> next;
    }
    cout<< endl;
}
int main(){
    Node* node1= new Node(10);
    Node* head= node1;
     Node* tail= node1;
    insertAtHead(head,15);
    print(head);
     insertAtHead(head,12);
    print(head);
 insertAtHead(head,11);
    print(head);
 insertAtTail(tail, 31);
    print(head);
insertAtPosition(head, 2,65);
  print(head);
  deleteNode(head, 3);
  print(head);
}