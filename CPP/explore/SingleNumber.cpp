#include <vector>

class Solution
{
public:
  int singleNumber(std::vector<int> &nums)
  {
    if (nums.empty())
      return 0;
    int first = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
      first = first ^ nums[i];
    }
    return first;
  }
};

// XOR logic works here because each pair will be xored to 0 and leave only the single value.