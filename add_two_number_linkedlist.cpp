/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

void push(node** h_ref,int data ){
    node * new_node = new node();
    new_node->data = data;
    new_node->next = *h_ref;
    *h_ref = new_node;
}
void print(node* head){
    while(head){
        cout<<head->data;
        head=head->next;
        
    }
}

node* add(node* head1,node* head2){
    node* head3=NULL;
    int carry = 0;
    while(head1 || head2){
        int sum=0;
        sum = head1->data+head2->data+carry;
        carry = sum/10;
        sum=sum%10;
        push(&head3,sum);
        head1=head1->next;
        head2=head2->next;
    }
    return head3;
}

int main()
{
    node* head= NULL;
    node* head2= NULL;
    push(&head,3);
    push(&head,2);
    push(&head,5);
    push(&head,6);
    push(&head2,3);
    push(&head2,8);
    push(&head2,0);
    push(&head2,9);
    print(head2);
    cout<<endl;
    print(head);
    cout<<endl;
    node* head3=add(head,head2);
    print(head3);
    

    return 0;
}
