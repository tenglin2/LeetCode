/*
  Trick to know if there is a cycle is that a walker and runner will meet at some point if there is a cycle.
*/
#include <cstdlib>

struct ListNode
{
  int val;
  struct ListNode *next;
  ListNode(int x)
  {
    this->val = x;
    this->next = NULL;
  }
};

class Solution
{
public:
  bool hasCycle(struct ListNode *head)
  {
    if (head == NULL)
      return false;

    struct ListNode *walker = head;
    struct ListNode *runner = head;

    while (runner->next != NULL && runner->next->next != NULL)
    {
      walker = walker->next;
      runner = runner->next->next;

      if (walker == runner)
        return true;
    }

    return false;
  }
};