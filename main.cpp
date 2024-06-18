#include <iostream>
#include "Problems_Sol_Functions/Add Two Numbers.cpp"
using namespace std;


int main() {
    Solution sol;
    ListNode* n0 = new ListNode(2);
    ListNode* n1 = new ListNode(4);
    ListNode* n2 = new ListNode(9);
    n0->next = n1;
    n1->next = n2;


    ListNode* l0 = new ListNode(5);
    ListNode* l1 = new ListNode(6);
    ListNode* l2 = new ListNode(4);
    ListNode* l3 = new ListNode(9);
    l0->next = l1;
    l1->next = l2;
    l2->next = l3;


    
    ListNode* ans = sol.addTwoNumbers(n0, l0);

    while (ans!=nullptr) {
        cout << ans->val<<endl;
        ans = ans->next;
    }

  
    return 0;
}
