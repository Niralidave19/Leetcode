/* Leetcode 19.Remove Nth node from end of linked list */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    //length of linked list
    struct ListNode* temp = head;
    int length = 1;
    int jumps = 0;
    int i = 0;
    if(head->next == NULL){
        return NULL;
    }
    while(temp->next != NULL){
        length++;
        temp = temp->next;
    }
    if(length == n){
        return head->next;
    }
    jumps = length - n;
    temp = head;
    while(temp->next != NULL){
        if(i == length - n - 1){
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
        i++;
    }
    printf("%d",length);
    return head;
}