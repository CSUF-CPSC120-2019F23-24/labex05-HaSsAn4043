// Random Rectangle
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
  unsigned seed = time(0); // setting max length of rectangle equal to 40
  srand(seed);
  std::string numSign;
  int max = 40;
  int myNum;
  int myRandom = rand();
  myNum = rand() % max + 1;

  numSign.assign(myNum, '#'); // making random number of #

  std::cout << numSign << '\n'; // making rectangle three high
  std::cout << numSign << '\n';
  std::cout << numSign << '\n';

  return 0;
}
