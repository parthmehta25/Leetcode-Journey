/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
         struct ListNode dummy;
         struct ListNode* op=&dummy;

         dummy.next=NULL;

         while(list1!=NULL && list2!=NULL) {
            if(list1->val <= list2->val)
            {
                op->next=list1;
                list1=list1->next;
            }else{
                op->next=list2;
                list2=list2->next;
            }
            op=op->next;
         }     
         op->next=(list1!=NULL)?list1:list2;
         return dummy.next;
}