// FindFactors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
private:
    int A;
public:
	Solution(int a)
	{
		A = a;
	}
	vector<int>allFactors(int);
};
vector<int> Solution::allFactors(int a) {
	vector<int> factors;
	for (int i = 1; i <= sqrt(A); i++) {
		if (A % i == 0) {
			factors.push_back(i);
			if (i != sqrt(A)) {
				factors.push_back(A / i);
			}
		}
	}
	sort(factors.begin(), factors.end());
	return factors;
}
int main()
{
	int t = 0;
	int n = 0;
	
	cin >> t;
	while (t--) {
		cin >> n;
		Solution* solution = new Solution(n);
		vector<int> factors = solution->allFactors(n);
		for (int i = 0; i < factors.size(); i++)
			cout << factors[i] << " ";
		cout << endl;
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
