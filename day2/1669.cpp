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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       int c=0; 
       ListNode* temp1=list1;
        while(a!=1){
            temp1= temp1->next;
            a--;
        }
        ListNode*temp2= list1;
        while(b!= -1){
            temp2 = temp2->next;
            b--;
        }
        temp1->next = list2;
        while(list2->next!= NULL){
            list2 = list2->next;
        }
        list2->next = temp2;
        return list1;
    }

};