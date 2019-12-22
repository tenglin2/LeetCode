#include <iostream>
#include <iterator>
#include <vector>
#include <map>
using namespace std;

int main()
{
  // vector<int> arr = {1, 2, 3, 4, 5, 6};

  // vector<int>::iterator ptr;

  // // arr.begin and arr.end give a pointer to the first and last elements of the list.
  // for (ptr = arr.begin(); ptr < arr.end(); ptr++)
  // {
  //   cout << *ptr << " ";
  // }

  map<char, int> myMap;
  map<char, int>::iterator it;

  myMap['a'] = 50;
  myMap['b'] = 100;
  myMap['c'] = 150;
  myMap['d'] = 200;

  it = myMap.find('b');
  if (it != myMap.end())
  {
    myMap.erase(it);
  }

  cout << myMap.find('a')->first << endl;
  cout << myMap.find('c')->first << endl;

  return 0;
}

// map.end() is actually outside of the actual map.
// The iterators are like pointers to structures that have members called first and second which give you the key and value pair for that specific iterator. I think you can do normal arithmetic on that too.

// sstream treats a string like a stream kinda like cin. For reading on some delimiter it would be getline(sstream, word, delimiter) used as a while condition. You can populate a vector using that.