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
        int m = 0;
        ListNode* curr = head;
        while(curr) {
            m++; curr = curr->next;
        }   
        m = m-n;
        if(m==0) {
            ListNode* newHead = head->next;
            return newHead;
        }
        int i = 0;
        ListNode* temp = head;
        while(i<m-1) {
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;

        return head;
    }
};
