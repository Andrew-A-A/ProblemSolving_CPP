#include <stack>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        ListNode* n =nullptr;
        ListNode* tmp = head->next;
      
        while (tmp != nullptr) {
            head->next = n;
          //  tmp->next = head;
            n = head;
            head = tmp;
            tmp = tmp->next;
            
      }
        head->next = n;
        return head;
    }
};
