/*
  CPP solution can do the same thing with just doing the set conversion and comparing the lengths.
*/
#include <set>
#include <vector>

class Solution {
  public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::set<int> st(nums.begin(), nums.end());

    return nums.size() > st.size();

  }
};