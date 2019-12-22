/**
 * Max profit turns out to be method of immediate sell off.
 */
#include <vector>

class Solution
{
public:
  int maxProfit(std::vector<int> &prices)
  {
    // Cannot have profit if only one value.
    if (prices.size() <= 1)
      return 0;

    int profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] - prices[i - 1] > 0)
      {
        profit += prices[i] - prices[i - 1];
      }
    }

    return profit;
  }
};