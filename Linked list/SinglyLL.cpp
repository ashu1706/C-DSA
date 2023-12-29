#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
Node(int data){
    this-> data= data;
    this-> next= NULL;
}
};

// INSERT AT BEGIN 

void insertAtHead(Node* &head, int d){
    // node create
    Node* temp = new Node(d);
    temp-> next= head;
    head= temp;

}


// Insert at End

void insertAtEnd(Node* &tail , int data){
    Node* temp = new Node(data);
    tail-> next = temp;
    tail= tail-> next;
    tail=temp;
}


// INSERT AT POSITION

void insertAtPosition(Node* &head , int position, int data){
   Node* p = head;
   int cnt=1;
   while(cnt !=position-1){
    p=p-> next;
    cnt++;
   }
Node* nodeinsert = new Node(data);
nodeinsert-> next= p-> next;
p->next= nodeinsert;

}

void deleteNode(int position, Node* &head){
    if(position==1){
         Node* temp= head;
        head= head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr= head;
        Node* prev= NULL;
        int cnt=1;
        while(cnt <position){
      prev=curr;
      curr= curr->next;
      cnt++;
        }
        prev->next= curr->next;
        curr-> next= NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp =head;
    while(temp!= NULL){
        cout<< temp-> data;
       temp= temp-> next;
    }
cout<< endl;
}
int main(){
    Node* node1= new Node(10);
    Node * head = node1;
     Node * tail = node1;
    print(head);
    insertAtEnd(tail, 15);
     insertAtEnd(tail, 12);
      print(head);
  insertAtPosition(head,3,4);
    print(head);
    deleteNode(3, head);
       print(head);


}

