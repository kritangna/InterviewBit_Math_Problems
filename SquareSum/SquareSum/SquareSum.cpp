// SquareSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Solution {
private:
	int A;
public:
	Solution(int a)
	{
		A = a;
	}
	vector<vector<int> > squareSum(int);
};
vector<vector<int> > Solution::squareSum(int A) {
	vector<vector<int> > ans;
	for (int a = 0; a * a < A; a++) {
		for (int b = a; b * b < A && a <= b; b++) {
			if (a * a + b * b == A) {
				vector<int> newEntry;
				newEntry.push_back(a);
				newEntry.push_back(b);
				ans.push_back(newEntry);
			}
		}
	}
	return ans;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<int>> result;
		Solution* solution = new Solution(n);
		result = solution->squareSum(n);
		for (int i = 0; i < result.size(); i++) {
			for (int j = 0; j < result[i].size(); j++) {
				cout << result[i][j] << " ";
			}
			cout << endl;
		}
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
