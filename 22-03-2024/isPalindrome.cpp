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
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prevNode = NULL, *nextNode;
        while(slow) {
            nextNode = slow->next;
            slow->next = prevNode;
            prevNode = slow;
            slow = nextNode;
        }

        while(prevNode) {
            if(head->val!=prevNode->val) return false;
            prevNode = prevNode->next;
            head = head->next;
        } 
        return true;
    }
};
