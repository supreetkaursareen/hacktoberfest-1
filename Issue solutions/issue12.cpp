//Count the Number of Set bits in a Binary Number
//This Program is solved using Brian Kernighan’s Algorithm
//Follow up link - https://iq.opengenus.org/brian-kernighan-algorithm/
#include <iostream>
using namespace std;
class Count {
public:
	unsigned int countSetBits(int n)
	{
		unsigned int count = 0;
		while (n) {
			n &= (n - 1);
			count++;
		}
		return count;
	}
};


int main()
{
	Count c;
	int i = 9;
	cout << c.countSetBits(i);
	return 0;
}
