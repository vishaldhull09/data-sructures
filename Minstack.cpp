#include <iostream> 
#include <queue> 
using namespace std; 
#define max 100
class stack{
    public:
    int top,size,arr[max],minEle;
    stack(){top=-1;size=max;minEle=0;}
    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    void getMin();
};

void stack::getMin() 
    { 
        if (top==-1) 
            cout << "Stack is empty\n"; 
  
       
        else
            cout <<"Minimum Element in the stack is: "
                 << minEle << "\n"; 
    } 
  

void stack::push(int value){
    if(top == size-1)
      cout<<"\nStack is Full!!! Insertion is not possible!!!";
    if (top==-1)
        { 
            minEle = value; 
            top++;
            arr[top]=value;
            cout <<  "Number Inserted: " << value << "\n"; 
            return; 
        } 
  
        
    if (value < minEle) 
    { 
        top++;
        arr[top]=2*value - minEle; 
        minEle = value; 
        return;
    } 
  
    else{
       top++;
       arr[top]=value;}

    cout <<  "Number Inserted: " << value << "\n"; 
} 
    
    
    
void stack::pop(){
   if(top == -1)
      cout<<"\nStack is Empty!!! Deletion is not possible!!!";
   
    cout << "Top Most Element Removed: "; 
    int t = arr[top--];

    if (t < minEle) 
    { 
        cout << minEle << "\n"; 
        minEle = 2*minEle - t; 
    } 

    else
        cout << t << "\n"; 
   
}
int stack::peek()  
{  
    if (top == -1)   
    {  
        cout<<"Underflow";  
        return 0;   
    }  
    else  
    {  
        int t = arr[top];
        (t < minEle)? cout <<"top is "<< minEle: cout <<"top is "<< t; 
    }  
}  
bool stack::isEmpty(){
    if (top==-1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    stack s;
    s.push(3); 
    s.push(5); 
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
    s.peek(); 
}M
