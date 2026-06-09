#include<iostream>
using namespace std;
#define MAX 100

class Stack{
    private:
    int top, st[MAX];


    public:
    Stack(){
        top=-1; 
    }

    void push(int x){
        if(top == MAX - 1){
            cout << "Stack Overflow" <<"\n";
        }
        else{
            top++;
            st[top] = x;
            cout << x << "    Pushed to stack" << "\n";
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack underflow" <<"\n";
        }
        else{
            cout << st[top] << "    Popped from stack" << "\n";
            top--;
        }
    }

    void peek(){
        if(top == -1){
            cout << "Stack is empty" <<"\n";
        }
        else{
            cout << "Top element is: " << st[top] <<"\n";
        }
    }
    
    bool isEmpty(){
        cout << "\n";
        return (top < 0);
    }

    void display(){
        if(top == -1){
            cout<< "Stack is empty" <<"\n";
        }
        else{
            cout << "Stack elements are: ";
           
            for(int i= top ; i >= 0 ; i--){
                cout << st[i] << " ";
            }
        }
    }


        
};

int main(){
 Stack s;
 s.push(5);
 s.push(6);
 s.push(9);
 s.push(7);
 s.push(1);
 s.pop();
 s.display();

 cout << s.isEmpty();
return 0;
}