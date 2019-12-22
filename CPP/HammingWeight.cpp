/*
  Hamming weight is counting the number of ones in a unsigned integer. This can be done by doing an & with 1 until the value is 0, keeping a counter.
*/
class Solution
{
public:
  int hammingWeight(int n)
  {
    unsigned int num = (unsigned int)n;
    int numOnes = 0;

    while (num != 0)
    {
      numOnes += num & 1;
      num = num >> 1;
    }

    return numOnes;
  }
};