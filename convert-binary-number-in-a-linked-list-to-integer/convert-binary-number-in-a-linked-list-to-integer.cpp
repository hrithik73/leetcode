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
    int getDecimalValue(ListNode* head) {
    vector<int> temp;
    int dec=0,j=1;
        
    while(head!=NULL){
        temp.push_back(head->val);
        head=head->next;
    }
        
        for(int i=temp.size()-1;i>=0;i--){
            dec=dec+j*temp[i];
            j*=2;
        }
        
        return dec;
    }
};
//
