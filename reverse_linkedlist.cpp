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

void reverse(node** head) 
    { 
        node* current = *head; 
        node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next; 
        } 
        *head = prev; 
    } 

int main()
{
    node* head= NULL;
    node* head2= NULL;
    push(&head,3);
    push(&head,2);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,4);
    cout<<"before reverse"<<endl;
    print(head);
    cout<<endl;
    cout<<"after reverse"<<endl;
    reverse(&head);
    print(head);

    return 0;
}
