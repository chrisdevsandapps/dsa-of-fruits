
/*
 * https://www.youtube.com/watch?v=P7lFzev9T4A
 * C++ Program: Recursion -Recursive function that Finds the sum of digits
 *
 *
 * https://stackoverflow.com/questions/4184468/sleep-for-milliseconds
*/

#include <iostream>
#include <chrono>
#include <thread>

using std::cout;
using std::cin;
using std::endl;


int sumOfDigits(int x) {
	if (x < 10) {
		return x;
	}
	return sumOfDigits(x/10) + x%10;
}


int main() {

	int x = 0;

	cout << "Enter a number: " << endl;

	cin >> x;

	cout << "result: " << sumOfDigits(x) << endl;

	return 0;
}


