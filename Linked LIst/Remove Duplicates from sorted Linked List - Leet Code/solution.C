/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *ptr = head;
    if(ptr == NULL){
        return head;
    }
    while(ptr!=NULL){
        
        struct ListNode *temp = ptr;
        while (temp->next != NULL && temp->val == temp->next->val) {
            struct ListNode* save = temp->next;
            temp->next = temp->next->next;
            free(save);
        }
        
        ptr = ptr->next;

    }
    return head;
}