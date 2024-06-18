#include <iostream>
#include "Problems_Sol_Functions/Reverse Linked List.cpp"
using namespace std;


int main() {
    Solution sol;
    ListNode* list1 = new ListNode(1);
    ListNode* n11 = new ListNode(2);
    ListNode* n12 = new ListNode(3);
    ListNode* n13 = new ListNode(4);
    ListNode* n14 = new ListNode(5);
    ListNode* n15 = new ListNode(6);
    list1->next = n11;
    n11->next = n12;
    n12->next = n13;
    n13->next = n14;
    n14->next = n15;


    
    ListNode* ans= sol.reverseList(list1);

    while (ans!=nullptr) {
        cout << ans->val<<endl;
        ans = ans->next;
    }

  
    return 0;
}
