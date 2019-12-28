#include <vector>

class Solution
{
public:
  int maxProfit(std::vector<int> &prices)
  {
    int profit = 0;

    if (prices.size() == 0 || prices.size() == 1)
      return profit;

    for (int i = 0; i < prices.size() - 1; i++)
    {
      if (prices[i] < prices[i + 1])
      {
        profit += prices[i + 1] - prices[i];
      }
    }

    return profit;
  }
};