// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
private:
	int A;

public:
	Solution(int a)
	{
		A = a;
	}
	vector<string> fizzBuzz(int);
};
vector<string>Solution::fizzBuzz(int a) {
	vector<string> result;
	for (int i = 1; i <= a; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			result.push_back("FizzBuzz");
		else if (i % 3 == 0)
			result.push_back("Fizz");
		else if (i % 5 == 0)
			result.push_back("Buzz");
		else
			result.push_back(to_string(i));
	}
	return result;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Solution* solution = new Solution(n);
		vector<string> res = solution->fizzBuzz(n);
		for (int i = 0; i < res.size(); i++)
			cout << res[i] << " ";
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
