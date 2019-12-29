#include <vector>

class Solution
{
public:
  void rotate(std::vector<int> &nums, int k)
  {
    // No rotation.
    if (k % nums.size() == 0)
      return;

    std::vector<int> numsCopy(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
      numsCopy[i] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
      nums[(i + k) % nums.size()] = numsCopy[i];
    }
  }
};