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
node* truncate(node* head,int pos)
{
    node* temp = head;
    node* new_node;
    for(int i=1;i<pos;i++)
    {
        temp = temp->next;
    }
    new_node = temp->next;
    temp->next = NULL;
    return new_node;

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
    cout<<"before truncate"<<endl;
    print(head);
    cout<<endl;
    node* head3 = truncate(head,3);
    cout<<"after truncate original"<<endl;
    print(head);
    cout<<endl;
    cout<<"after truncate new"<<endl;
    print(head3);

    return 0;
}
