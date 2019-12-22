/*
  Given an array of integers, return the indices of the two numbers such that they add up to a specific target. Cannot use same element twice. Has exactly one solution.
  
  Doesn't look like I need to make the main driver function, only a class that has the method defined.

  The array is not necessarily sorted, so I can't have pointers at both ends. Use a double for loop with i and j index.
*/
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> hash;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
      int numToFind = target - nums.at(i);
      auto num = hash.find(numToFind);

      if (num != hash.end())
      {
        result.push_back(num->second);
        result.push_back(i);
        return result;
      }
      hash[nums[i]] = i;
    }
    return result;
  }
};

// So is hash.end() somewhat equivalent to a null?
// Here is my reasoning... The hash.find will return an iterator if the difference value between target and current is inside of the hash already. This is because the find method will return a iterator and be compared to hash.end(). Hash.end() is the thing that doesn't get reached. If the iterator is not hash.end() is equivalent to saying the iterator gave back a real value, meaning the difference was found in the hash.
// Hash find should give a iterator which is a pointer to structure which can access the key value pair of that specific found position. If it is successful then you just need to populate the dynamic array vector and return. In the case where the iterator is equal to hash.end(), then that means the key was not found in the hash. In which case we populate it with the particular number value and index.

// Remember that the whole point of this was to show that using a hash map would allow you to save the current integer and its index to check on later iterations.