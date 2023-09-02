/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int rem = 0;
    struct ListNode *START = NULL;
    while( l1 != NULL || l2 != NULL){
        int num1, num2;
        struct ListNode *ptr = START;
        if(l1){
            num1 = l1->val;
            l1 = l1->next;
        }
        else{
            num1 = 0;
        }

        if(l2){
            num2 = l2->val;
            l2 = l2->next;
        }
        else{
            num2 = 0;
        }

        int sum = num1 + num2;
        if(START == NULL){
            struct ListNode *ptr1;
            ptr1 = malloc(sizeof(struct ListNode));
            ptr1->val = sum%10;
            ptr1->next = NULL;
            START = ptr1;
            rem = sum/10;
        }
        else{
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            struct ListNode *ptr2;
            int sum1;
            ptr2 = malloc(sizeof(struct ListNode));
            sum1 = sum + rem;
            ptr2->next = NULL;
            ptr2->val = sum1%10;
            ptr->next = ptr2;
            rem = sum1/10;
        }

    }
    while(rem!=0){
        struct ListNode *ptr3;
        ptr3 = malloc(sizeof(struct ListNode));
        struct ListNode *ptr = START;
        while(ptr->next != NULL){
            ptr = ptr->next;
        } 
        ptr3->val = rem%10;
        ptr3->next = NULL;
        ptr->next = ptr3; 
        rem = rem/10;
    }
    return START;
}