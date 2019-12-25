/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <cstdlib>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  ListNode *reverseList(ListNode *head)
  {
    ListNode *currentNode = head;
    ListNode *prev = NULL;
    ListNode *next;

    ListNode *newHead;

    while (currentNode != NULL)
    {
      // Now the tail...
      if (currentNode->next == NULL)
        newHead = currentNode;

      next = currentNode->next;
      currentNode->next = prev;
      prev = currentNode;
      currentNode = next;
    }

    // Problem is that it iterates to null, not tail.
    return newHead;
  }
};