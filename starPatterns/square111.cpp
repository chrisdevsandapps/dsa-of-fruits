
/*
 *
 * https://www.youtube.com/watch?v=8FZP4fnz2o4
 * C++: Square shape using stars
 * BeginnerPrograms
 *
 * https://stackoverflow.com/questions/4184468/sleep-for-milliseconds
*/

#include <iostream>
#include <chrono>
#include <thread>

using std::cout;
using std::cin;
using std::endl;


int main() {
	
	int theSize = 0;

	cout << "Enter the size of the Square: " << endl;

	cin >> theSize;
	
	cout << " " << endl;

	for (int rows = 0; rows != theSize; rows++) {
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		for (int cols = 0; cols != theSize; cols++) {
			bool logic1 = rows == 0;
			bool logic2 = rows == (theSize - 1);
			bool logic3 = cols == 0;
			bool logic4 = cols == (theSize - 1);
			if (logic1 || logic2 || logic3 || logic4){
				std::this_thread::sleep_for(std::chrono::milliseconds(500));
				cout << "* ";
			} else {
				std::this_thread::sleep_for(std::chrono::milliseconds(500));
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	cout << " " << endl;

	return 0;
}


