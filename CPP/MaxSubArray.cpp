/*
  Aggregate solution using max and a cumulative value variable.
*/
#include <vector>
#include <limits>
#include <algorithm>
#include <cstdio>
#include <climits>

// Aggregate done by using two variable and a value check that is cumulative unless negative. KEEP THAT IN MIND. REALLY USEFUL.
class Solution
{
public:
  int maxSubArray(std::vector<int> &nums)
  {
    int max = std::numeric_limits<int>::min();
    int value = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      value += nums[i];
      max = std::max(max, value);

      // Now starting index. BASICALLY SAYING RESTART.
      value = std::max(0, value);

      printf("max %d, value %d\n", max, value);
    }

    return max;
  }
};

// Equivalent
class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int sum = 0;
    int smax = INT_MIN;

    for (int num : nums)
    {
      sum += num;
      smax = std::max(smax, sum);

      if (sum < 0)
      {
        sum = 0;
      }
    }

    return smax;
  }
};

// Divide and Conquer
class Solution
{
public:
  int maxSubArray(std::vector<int> &nums)
  {
    return maxSubArray(nums, 0, nums.size() - 1);
  }

private:
  int maxSubArray(std::vector<int> &nums, int l, int r)
  {
    if (l > r)
    {
      return INT_MIN;
    }

    int m = l + (r - 1) / 2;
    int ml = 0;
    int mr = 0;

    int lmax = maxSubArray(nums, l, m - 1);
    int rmax = maxSubArray(nums, m + 1, r);

    for (int i = m - 1, sum = 0; i >= 1; i--)
    {
      sum += nums[i];
      ml = std::max(sum, ml);
    }
    for (int i = m + 1, sum = 0; i <= r; i++)
    {
      sum += nums[i];
      mr = std::max(sum, mr);
    }

    return std::max(std::max(lmax, rmax), ml + mr + nums[m]);
  }
};