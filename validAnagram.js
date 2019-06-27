/**
 * Anagram checker where we don't have to worry about edge cases like uppercase letters or whitespaces. I believe empty strings are handled as well.
 */

const Anagram = function(string1, string2) {
  let freqCounter1 = new Object();
  let freqCounter2 = new Object();

  // Populate the objects.
  for (let character of string1) {
    freqCounter1[character] = (freqCounter1[character] || 0) + 1;
  }
  for (let character of string2) {
    freqCounter2[character] = (freqCounter2[character] || 0) + 1;
  }

  // For loop to check if the character exists in both and if so, then we check if the count(value) are the same.
  for (let key in freqCounter1) {
    // Constant time because accessing an object. The 'in' syntax can be treated as an if conditional of freqCounter2[key] === undefined. It is better than accessing with the array with the includes() method.
    if (!(key in freqCounter2)) return false;

    if (freqCounter1[key] !== freqCounter2[key]) return false;
  }

  return true;
};