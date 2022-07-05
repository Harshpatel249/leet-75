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
    int length(ListNode* head){               // function to find length of linked list
        
        int l= 0;
        ListNode* temp = head;
        while(temp!=NULL){
            l++;
            temp= temp->next;
        }
        
        return l;
    }
    
    ListNode* middleNode(ListNode* head) {      
     
    int l = length(head);
    ListNode* temp = head;
    int count = 1;
        
    while(temp!=NULL && count<=(l/2)){      // Traversal to half of length to find node
        temp = temp->next;
        count++;
    }
    
    return temp;
    }
};