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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
  {

    if (l1 == NULL)
      return l2;
    if (l2 == NULL)
      return l1;

    // Dummy.
    ListNode *head = NULL;

    if (l1->val < l2->val)
    {
      head = l1;
      l1 = l1->next;
    }
    else
    {
      head = l2;
      l2 = l2->next;
    }

    ListNode *currentNode = head;

    while (l1 != NULL && l2 != NULL)
    {
      if (l1->val < l2->val)
      {
        currentNode->next = l1;
        l1 = l1->next;
      }
      else
      {
        currentNode->next = l2;
        l2 = l2->next;
      }

      currentNode = currentNode->next;
    }

    // Add to rest of the tail.
    if (l1 != NULL)
      currentNode->next = l1;
    else
      currentNode->next = l2;

    return head;
  }
};