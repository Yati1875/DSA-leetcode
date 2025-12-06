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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (!head || !head->next || k == 0) return head;

        // Step 1: compute length
        int n = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: make circle
        tail->next = head;

        // Step 3: k may be large
        k = k % n;
        int stepsToNewTail = n - k - 1;

        // Step 4: find new tail
        ListNode* newTail = head;
        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 5: new head = next of new tail
        ListNode* newHead = newTail->next;

        // break the circle
        newTail->next = nullptr;

        return newHead;
    }
};