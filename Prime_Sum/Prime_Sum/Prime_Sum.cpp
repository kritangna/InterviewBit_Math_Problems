// Prime_Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

class Solution {
private:
	int A;
public:
	Solution(int num)
	{
		A = num;
	}
	vector<int>primeSum(int);
};
int isPrime(int a) {
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0)
			return 0;
	}
	return 1;
}
vector<int>Solution::primeSum(int A) {
	vector<int> primes;
	for (int i = 2; i < A; i++) {
		if (isPrime(i) && isPrime(A - i)) {
			primes.push_back(i);
			primes.push_back(A - i);
			return primes;
		}
	}
	return primes;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Solution* solution = new Solution(n);
		vector<int>result = solution->primeSum(n);
		cout << result[0] << " " << result[1] << endl;
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
