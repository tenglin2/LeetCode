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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    // n means remove the nth from the end, so you can formulate this by finding out the size of the LL. The problem with that is that it would require one pass just to find the size.

    ListNode *currentNode = head;

    int counter = 0;
    while (currentNode != NULL)
    {
      currentNode = currentNode->next;
      counter += 1;
    }

    // Empty list...
    if (counter == 0)
      return NULL;

    // Only one element.
    if (counter == 1 && n == 1)
    {
      head->next = NULL;
      return NULL;
    }

    currentNode = head;

    // Remove the tail.
    if (n == 1)
    {
      // Will break on second last element for current node.
      while (currentNode->next->next != NULL)
      {
        currentNode = currentNode->next;
      }
      currentNode->next = NULL;
      return head;
    }

    // Remove the head.
    if (n == counter)
    {
      ListNode *newHead = head->next;
      head->next = NULL;
      return newHead;
    }

    // General case inbetween.

    // The formula should be to stop at the one before it. If the size of the LL is 5 and n is 2, then we want to stop at index 2, the third element.
    int prevIndex = counter - n - 1;
    int i = 0;
    ListNode *temp = head;
    while (i < prevIndex)
    {
      temp = temp->next;
      i += 1;
    }
    // temp is now equal to the node before the deleted node.
    // Remember that this is the general case.
    ListNode *removedNode = temp->next;
    temp->next = removedNode->next;
    removedNode->next = NULL;

    return head;
  }
};