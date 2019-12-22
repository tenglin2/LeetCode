/*
  Using the left right multiplier logic to avoid using division.
*/
#include <vector>

class Solution
{
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums)
  {
    std::vector<int> productArr(nums.size());
    int multiplier = 1;

    for (int i = 0; i < nums.size(); i++)
    {
      productArr[i] = multiplier;
      multiplier *= nums[i];
    }

    multiplier = 1;

    for (int j = nums.size() - 1; j >= 0; j--)
    {
      productArr[j] *= multiplier;
      multiplier *= nums[j];
    }

    return productArr;
  }
};