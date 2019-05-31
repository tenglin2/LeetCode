// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// So use two for loops right? Index i and j and traverse through each.
// Assume that each input has only one solution, so we don't have to check for multiple.
// You cannot use the same element twice.
// We get an input number and array which is an object technically.
// Loop through the indices of the array and find pairs. Not sure if forEach would help. Though I though forEach has implicit index parameter.
// Should solve edge case where array size is very limited.

// This works, but this is brute force method. Keep in mind that we go from nums.length - 1 for first index and nums.length for second index because we are using a less than operator. Made the mistake of doing -2 and -1 instead.
let twoSum = function(nums, target) {
  for (let i = 0; i < nums.length - 1; i += 1) {
    for (let j = i + 1; j < nums.length; j += 1) {
      if (nums[i] + nums[j] === target) return [i, j];
    }
  }
};