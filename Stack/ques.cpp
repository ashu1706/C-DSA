#include<iostream> 

// reverse a string using stack
#include<stack>
using namespace std;

int main(){
stack<int>s;
string str="Ashu";
for(int i=0; i< str.length(); i++){
    char ch = str[i];
    s.push(ch);
}
string ans=" ";

while(!s.empty()){
    char ch = s.top();
    ans.push_back(ch);
    s.pop();
}
cout<< ans;
}

//sorted array
void sortedInsert(stack<int>&stack, int num){
    if(stack.empty() || (stack.empty() && stack.top()< num)){
        stack.push(num);
        return;
    }
    int n= stack.top();
    stack.pop();
    // recursive call;
    
    sortedInsert(stack, num);
    stack.push(n);

}
void sortStack(stack<int>&stack){
    if(stack.empty()){
        return;
    }
    int num= stack.top();
    stack.pop();
    // recursive call

    sortStack(stack);
    sortedInsert(stack, num);
}

