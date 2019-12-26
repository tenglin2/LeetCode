/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <cstdlib>
#include <vector>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  bool isPalindrome(ListNode *head)
  {

    if (head == NULL)
      return true;

    std::vector<int> forwardOrder;
    std::vector<int> reverseOrder;

    ListNode *currentNode = head;
    int counter = 0;

    while (currentNode != NULL)
    {
      forwardOrder.push_back(currentNode->val);
      counter += 1;
      currentNode = currentNode->next;
    }

    for (int i = counter - 1; i >= 0; i--)
    {
      reverseOrder.push_back(forwardOrder[i]);
    }

    for (int j = 0; j < counter; j++)
    {
      if (forwardOrder[j] != reverseOrder[j])
        return false;
    }

    return true;
  }
};