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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
        ListNode*temp2=NULL;
        ListNode*prev=NULL;
        while(temp)
        {
            temp2= temp->next;
            prev=temp;
            while(temp2!=NULL)
            {
                if(temp->val==temp2->val)
                {
                    prev->next=temp2->next;
                    delete temp2;
                    temp2=prev->next;
                }
                else
                {
                    prev=temp2;
                    temp2=temp2->next;
                }
            }
            temp=temp->next;
        }
        return head;
    }
};