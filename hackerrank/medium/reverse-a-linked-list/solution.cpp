

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *p=llist;
    
    SinglyLinkedListNode *q=llist->next;
    
    while(q!=NULL && q->next!=NULL){
        SinglyLinkedListNode* newnode=new SinglyLinkedListNode(q->data);
        newnode->next=llist;
        llist=newnode;
        p->next=q->next;
        q=p->next;
    }
        SinglyLinkedListNode* newnode=new SinglyLinkedListNode(q->data);
        newnode->next=llist;
        llist=newnode;
        p->next=q->next;
        q=p->next;
    
    return llist;
    
    

}

