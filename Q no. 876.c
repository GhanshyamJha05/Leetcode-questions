struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *tmp;
    tmp=head;
    int count=0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    count/=2;
    tmp=head;
    for(int i=0;i<count;i++){
        tmp=tmp->next;
    }
    return tmp;
}
