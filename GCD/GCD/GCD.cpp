// GCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Solution {
private:
    int A = 0, B = 0;
public:
    Solution(int a, int b)
    {
        A = a;
        B = b;
    }
    int gcd(int, int);
};
int Solution::gcd(int A, int B) {
    int result = 0;
    int n = A <= B ? A : B;
    if (A == 0)
        return B;
    if (B == 0)
        return A;
    for (int i = 1; i <= n; i++) {
        if (A % i == 0 && B % i == 0)
            result = i;
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a = 0, b = 0;
        cin >> a>>b;
        Solution* solution = new Solution(a,b);
        cout << solution->gcd(a,b) << endl;
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
