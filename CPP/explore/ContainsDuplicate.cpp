#include <cstdlib>
#include <unordered_map>
#include <vector>

class Solution
{
public:
  bool containsDuplicate(std::vector<int> &nums)
  {
    // You could go through each value and linearly check a hash table of all the values you already inserted.
    std::unordered_map<int, int> numsCount;

    // Linearly iterate through nums vector and if count is 1, return false.
    for (int i = 0; i < nums.size(); i++)
    {
      if (numsCount[nums[i]] == 1)
        return true;
      else if (numsCount[nums[i]] == NULL)
      {
        numsCount[nums[i]] = 1;
      }
    }

    return false;
  }
};