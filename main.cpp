#include <iostream>
#include "Problems_Sol_Functions/Merge Two Sorted Lists.cpp"
using namespace std;


int main() {
    Solution sol;
    ListNode* list1 = new ListNode(1);
    ListNode* n11 = new ListNode(2);
    ListNode* n12 = new ListNode(4);
    list1->next = n11;
    n11->next = n12;

    ListNode* list2 = new ListNode(1);
    ListNode* n21 = new ListNode(3);
    ListNode* n22 = new ListNode(4);
    list2->next = n21;
    n21->next = n22;

    
    ListNode* ans= sol.mergeTwoLists(list1, list2);

    while (ans != nullptr) {
        cout << ans->val<<endl;
        ans = ans->next;
    }

  
    return 0;
}
