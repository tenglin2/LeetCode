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
  bool hasCycle(ListNode *head)
  {
    if (head == NULL)
      return false;

    ListNode *walker = head;
    ListNode *runner = head;

    // Runner does a double take and if it ever encounters a null, then that means it definitely doesn't have a cycle.
    while (runner->next != NULL && runner->next->next != NULL)
    {

      walker = walker->next;
      runner = runner->next->next;
      // You shouldn't compare immediately b/c they start at head.
      if (walker == runner)
        return true;
    }

    return false;
  }
};