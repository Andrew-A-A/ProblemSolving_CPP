
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ansHead=new ListNode();
        ListNode* listPtr= new ListNode();

        if (list1 == nullptr && list2 != nullptr) {
            ansHead->val = list2->val;
            list2 = list2->next;
        }
        else if (list1 != nullptr && list2 == nullptr) {
            ansHead->val = list1->val;
            list1 = list1->next;
        }
        else if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        else if (list1->val <= list2->val) {
            ansHead->val = list1->val;
            list1 = list1->next;
        }
        else {
            ansHead->val = list2->val;
            list2 = list2->next;
        }

        listPtr = ansHead;

        while (list1!=nullptr && list2!=nullptr)
        {
            ListNode* nxt=new ListNode();
            if (list1->val <= list2->val) {
                nxt->val = list1->val;
                list1 = list1->next;
            }
            else {
                nxt->val = list2->val;
                list2 = list2->next;
            }
            listPtr->next = nxt;
            listPtr = listPtr->next;
            
        }

        ListNode* remain;
        if (list1==nullptr)
        {
          remain = list2;
        }
        else
        {
            remain = list1;
        }

        while (remain!=nullptr)
        {
            ListNode* nxt = new ListNode();
            nxt->val = remain->val;
            listPtr->next = nxt;
            listPtr = listPtr->next;
            remain = remain->next;
        }

        return ansHead;
    }
};