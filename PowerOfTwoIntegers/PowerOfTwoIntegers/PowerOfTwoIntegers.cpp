// PowerOfTwoIntegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Solution {
private:
    int A;
public:
	Solution(int a)
	{
		A = a;
	}
	int isPower(int);
};
int Solution::isPower(int A) {
    if (A == 1)
        return 1;
    for (int i = 2; i <= sqrt(A); i++) {
        int num = A;
        while (num % i == 0) {
            num /= i;
            if (num == 1)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution* solution = new Solution(n);
        if (solution->isPower(n))
            cout << "True";
        else
            cout << "False";
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
