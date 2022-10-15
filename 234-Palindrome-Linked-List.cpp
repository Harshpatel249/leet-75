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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*> arr;
        ListNode* temp = head;
        
        while(true){
            arr.push_back(temp);
            if(temp->next != NULL){
                temp = temp->next;
            }else{
                break;
            }
        }
        
        int j = arr.size()-1;
        int i = 0;
        bool op = true;
        
        while(i<=j){
            if(arr[i] -> val != arr[j] -> val){
                op = false;
                break;
            }
            i++;
            j--;
        }
        
        return op;
    }
};