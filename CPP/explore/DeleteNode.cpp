/**
 * Definition for singly-linked list.
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
  void deleteNode(ListNode *node)
  {
    // This is a public method inside of a class. Given a struct of a ListNode that is not aliased to ListNode. It has member of value, a next pointer, and a constructor method that accepts an integer and initializes the node. It uses that special syntax with a colon like constructor(args) : member(arg), member(arg) {}; It's pretty weird.
    // As for this method, I'm not sure what is given. Node is a listNode pointer but is that the head? Should I assume it's the head?

    // Hold on, so I don't have access to head or tail? I don't have a previous pointer either so I can't tell if it's the head or not.
    // Okay, so the main problem is that I cannot access the previous list node. I can access the next one no problem, but there's no way to backtrack given only one node because we can't move backwards. The main operation is just moving the next pointer of the previous to the next of the current one. How do you do that?

    // ACCESS THE PREVIOUS NODE.
    // Okay, the answer is that you don't delete the current node. Instead you replace the value of that and then act like the current is the previous node.

    int replaceValue = node->next->val;
    node->val = replaceValue;

    // Do I need to make a temp here?
    ListNode *temp = node->next;
    node->next = temp->next;

    // Proper freeing of memory...
    // delete(temp->next);
    // delete(temp);

    // Important part here is that given only a node and assuming that the deleted node is not the tail, you can simulate by copying the value from next and delete the one you had.
  }
};