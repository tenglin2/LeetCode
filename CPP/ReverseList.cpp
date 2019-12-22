/*
  Reversing a linked list
*/
class Solution {
  public:
  struct ListNode *reverseList(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *next;

    struct ListNode *currentPtr = head;
    while (currentPtr != NULL) {
      next = currentPtr->next;
      currentPtr->next = prev;
      prev = currentPtr;
      currentPtr = next;
    }

    return prev;
  }
};