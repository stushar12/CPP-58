void removeLoop(Node* head)
{
Node * slow=head;
Node *fast=head;
while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    break;
}
if(slow!=fast)
{
    return ;
}
slow=head;
Node *ptr1=slow;
Node *ptr2=fast;
while (ptr2 != ptr1) { 
        ptr1 = ptr1->next; 
        ptr2 = ptr2->next; 
    } 

    while (ptr2->next != ptr1) 
        ptr2 = ptr2->next; 

    ptr2->next = NULL; 
} 