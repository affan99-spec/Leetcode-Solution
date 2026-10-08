/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3, *temp;
        if(list1 == NULL && list2 == NULL){
            return NULL;
        }
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val < list2->val){
            temp = list3 = list1;
            list1 = list1->next;
            list3->next = NULL;
        } else {
            temp = list3 = list2;
            list2 = list2->next;
            list3->next = NULL;
        }
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                list3->next = list1;
                list3 = list1;
                list1 = list1->next;
                list3->next = NULL;
            } else {
                list3->next = list2;
                list3 = list2;
                list2 = list2->next;
                list3->next = NULL;
            }
        }
        if(list1 != NULL){
            list3->next = list1;
        } else {
            list3->next = list2;
        }
        return temp;
    }
};