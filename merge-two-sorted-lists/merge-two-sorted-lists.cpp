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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* node = new ListNode();
        ListNode* newNode=node;
        ListNode* p=l1;
        ListNode* q=l2;
        
        
        while (p and q)
        {
            if((p->val)< (q->val)){
            newNode->next=p;
            p=p->next;
            }
            else{
                newNode->next=q;
                q=q->next;   
            }
            newNode=newNode->next;
        }
        
        while(q){
            newNode->next=q;
            q=q->next;   
            newNode=newNode->next;
        }
          while(p){
            newNode->next=p;
            p=p->next;
            newNode=newNode->next;
        }
        
        
            
         return node->next;            
    }
};