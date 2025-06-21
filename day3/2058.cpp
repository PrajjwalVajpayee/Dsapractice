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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;
        while (curr->next != NULL) {
            if (prev != NULL) {
                if ((curr->val > prev->val && curr->val > curr->next->val) ||
                    (curr->val < prev->val && curr->val < curr->next->val)) {
                    v.push_back(pos);
                }
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }

        if (v.size() < 2)
            return {-1, -1};
        int mini = INT_MAX;
        int maxi = v.back() - v.front();
        for (int i = 1; i < v.size(); i++) {
            mini = min(mini, v[i] - v[i - 1]);
        }
        return {mini, maxi};
    }
};