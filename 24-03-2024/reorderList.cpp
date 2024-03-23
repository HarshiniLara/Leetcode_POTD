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
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prevNode = NULL, *curr = slow->next, *nextNode;
        slow->next = NULL;
        while(curr) {
            nextNode = curr->next;
            curr->next = prevNode;
            prevNode = curr;
            curr = nextNode;
        }
        ListNode *p1 = head, *p2 = prevNode, *next, *next1;
        while(p2) {
            next = p1->next;
            p1->next = p2;
            next1 = p2->next;
            p2->next = next;
            p1 = next;
            p2 = next1;
        }
    }
};
