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
~Node(){
    int val= this-> data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
    cout<< "Memory is free for the node"<< val << endl;
}
};
// Insertion in Circular LL

void insertNode(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* newnode= new Node(data);
        tail= newnode;
        newnode->next= newnode;

        }
        else{
             Node* curr= tail;
             while(curr-> data !=element){
                curr=curr->next;
             }
             Node* temp= new Node(data);
             temp->next= curr->next;
             curr->next=temp;
        }
    }

    // deletion in Circular LL

    void deleteNode(Node* & tail, int value){
        // empty
        if(tail== NULL){
            cout<< "List is Empty"<< endl;
            return;
        }
        else{
         Node* prev = tail;
         Node* curr = prev-> next;
         while(curr->data != value){
            prev= curr;
            curr= curr->next;

         }
         prev->next= curr-> next;
         if(curr== prev){
            tail=NULL;
         }
         else if(tail==curr){
            tail=prev;
         }
         curr->next=NULL;

        }

    }

    // Function to print 
    
void Print(Node* &tail){
    Node* temp= tail;
    do{
        cout<< tail->data<< " ";
        tail= tail->next;
    }
    while(tail!= temp);
    cout<< endl;
}

int main(){
    Node* tail=NULL;
    insertNode(tail, 5,3);
    Print(tail);
    insertNode(tail,3, 5);
    Print(tail);
    insertNode(tail,5, 9);
    Print(tail);
    insertNode(tail,9, 7);
    Print(tail);
    deleteNode(tail, 3);
    Print(tail);


}