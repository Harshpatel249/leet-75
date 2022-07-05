/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) {
            return nullptr;
        }
        unordered_set<ListNode*> detector;
        detector.insert(head);
        while (head->next) {
            if (detector.find(head->next) != detector.end()) {
                return head->next;
            }
            detector.insert(head->next);
            head = head->next;
        }
        return nullptr;
    }
};