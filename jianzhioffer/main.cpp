#include <iostream>
using namespace std;
#include "Solution3.h"
#include "Solution3_1.h"

int main() {
	vector<int> v1 = { 3, 2, 1, 2 };
	int nums[] = { 2, 3, 5, 4, 3, 2, 6, 7, 8 };
	cout << Solution3_1().findRepeatNumber(nums, 8) << endl;

	return 0;
}