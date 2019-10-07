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
        cout<<head->data<<"->";
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
void secondLast(node* head){
    node* temp=NULL;
    while(head->next){
        if(temp==NULL){
            temp=head;
            head=head->next;
        }
        else{
        head=head->next;
        temp=temp->next;    
        }
    }
    cout<<temp->data<<endl;
}

int main()
{
    node* head= NULL;
    node* head2= NULL;
    push(&head,3);
    push(&head,2);
    push(&head,5);
    push(&head,6);
    print(head);
    cout<<endl;
    secondLast(head);

    return 0;
}
