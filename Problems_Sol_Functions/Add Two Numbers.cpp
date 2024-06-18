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
    bool isCarry = false;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //Create head of the answer list
        ListNode* ans;
        if (l1 && l2)
        {
            ans = new ListNode(addNodesVal(l1, l2));
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1) {
            ans = new ListNode(l1->val);
            l1 = l1->next;
        }
        else {
            ans = new ListNode(l2->val);
            l2 = l2->next;
        }

        ListNode* tmp = ans;

        while (l1 && l2) {

            tmp->next = new ListNode(addNodesVal(l1, l2));
            tmp = tmp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            tmp->next = new ListNode(addNodesVal(l1, new ListNode()));
            tmp = tmp->next;
            l1 = l1->next;
        }
        while (l2) {
            tmp->next = new ListNode(addNodesVal(new ListNode(), l2));
            tmp = tmp->next;
            l2 = l2->next;
        }

        if (isCarry)
        {
            tmp->next = new ListNode(1);
        }

        return ans;

    }

    int addNodesVal(ListNode* l1, ListNode* l2) {
        int sum = l1->val + l2->val;
        //check if there is a carry, then add 1
        if (isCarry)
        {
            sum++;
            isCarry = false;
        }

        //Check if the sum is bigger than 10, to add carry for second digit
        if (sum < 10) {
            return sum;
        }
        else {
            isCarry = true;
            return sum - 10;
        }
    }
};