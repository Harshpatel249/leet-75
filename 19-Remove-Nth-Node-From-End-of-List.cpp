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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> arr;
        
        ListNode* curr = head;
        while(true){
            arr.push_back(curr);
            if(curr->next){
                curr = curr->next;
            }else{
                break;
            }
        }
        
        int target = (arr.size()-1) - n;
        
        if(target>=0){
           if(target+2 <arr.size()){
               arr[target] -> next = arr[target+2];
           }else{
               arr[target] -> next = NULL;
           }
            return arr[0];
        }else if(target+1 == 0){
            if(target+2<arr.size()){
                return arr[target+2];
            }else{
                return NULL;
            }
        }else{
            return arr[0];
        }
    }
};