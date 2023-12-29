#include<iostream>
#include<stack>
using namespace std;

class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    TwoStack(int s){
        this->size=s;
        int top1=-1;
        int top2=size;
        arr= new int[s];

    }
    void push1(int x){
        if(top2 - top1> 1){
            top1++;
            arr[top1]=x;

        }
        else{
            cout<<"stack overflow "<< endl;
        }

    }
void push2(int num){
    if(top2-top1 >1){
        top2--;
        arr[top2]=num;
    }
    else{
          cout<<"stack overflow "<< endl;
    }
}
int pop1(){
    if(top1>=0){
        int ans=arr[top1];
        top1--;
        return ans;
    }
}
int pop2(){
    if(top2>=0){
        int ans=arr[top2];
        top1--;
        return ans;
    }


}
};