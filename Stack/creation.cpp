#include<iostream> 
#include<stack>
using namespace std;
int main(){
    // using STL
   stack<int> s;

   s.push(9);
    s.push(2);
    s.pop();
    cout <<s.top() <<endl;
    if(s.empty()){
        cout<< "Stack is empty"<< endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
}
   // implementation
   
   class stack{
    public:
    int top;
    int size;
    int *arr;

    stack(int size){
        this->size= size;
        arr=new int[size];
        top=-1;
    }

   void push(int x){
    if(size-top>1){
        top++;
         arr[top]=x;
    }
    else{
     cout<<"Stack Overflow" << endl;
    }

    }

   void pop(){
   if(top==-1){
    cout<< "Stack Underflow"<< endl;
   }
   else{
  top--;
   }
    }
    int peak(){
        if(top>=0 && top< size)
        return arr[top];
        else{
            cout<<" stack is empty"<< endl;
            return -1;
        }
    }

   };
  
int main(){

    stack st(5);
    st.push(22);
    st.push(78);
    st.push(44);
    cout<< st.peak() << endl;
    st.pop();
     cout<< st.peak() << endl;

}




