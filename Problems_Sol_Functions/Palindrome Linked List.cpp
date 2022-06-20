#include <stack>
//Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *tmp=head;
        std::stack<int> stack{};
        while(tmp!= nullptr){
            if (stack.empty())
                stack.push(tmp->val);

            else if (tmp->val==stack.top())
                stack.pop();
            else
                stack.push(tmp->val);
            tmp=tmp->next;
        }
        if (head->next== nullptr)
            return 1;
        else
        return stack.empty();

    }
};