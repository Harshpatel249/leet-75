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
    ListNode* oddEvenList(ListNode* head) {
        vector<ListNode*> odd;
        vector<ListNode*> even;
        int i=1;
        ListNode* curr = head;
      
        if(head==NULL){
            return NULL;
        }
        
        while(true){
            
            if(i%2==0){
                even.push_back(curr);
            }else{
                odd.push_back(curr);
            }
            
            if(curr->next==NULL){
                break;
            }else{
                curr = curr->next;
            }
            i++;
        }
       
        for(int j=0;j<odd.size()-1;j++){
            odd[j]->next = odd[j+1];
        }
        
        if(even.size()>0){
            odd[odd.size()-1] -> next = even[0];
           
            for(int j=0;j<even.size()-1;j++){
                even[j]->next = even[j+1];
            }
            even[even.size()-1]->next = NULL;
        }
        
        return odd[0];
    }
};