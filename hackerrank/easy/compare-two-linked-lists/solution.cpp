

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *p=head1;
    SinglyLinkedListNode *q=head2;
    
    while(p!=NULL && q!=NULL){
        if(p->data==q->data){
            p=p->next;
            q=q->next;
        }
        else{
            return false;
        }
    }
    if(p!=NULL || q!=NULL){
        return false;
    }
    return true;
    


}

