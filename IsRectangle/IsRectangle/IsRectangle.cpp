// IsRectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class Solution {
private:
    int A, B, C, D;
public:
	Solution(int a, int b, int c, int d)
	{
		A = a;
		B = b;
		C = c;
		D = d;
	}
	int solve(int, int, int, int);
};
int Solution::solve(int a, int b, int c, int d) {
	if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
		return 1;
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		Solution* solution = new Solution(a, b, c, d);
		cout << solution->solve(a, b, c, d) << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
