// PairwiseHammingDistance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Solution {
private:
     vector<int>A;
public:
    Solution(vector<int> a)
    {
        A = a;
    }
    int hammingDistance(vector<int>);
};
int Solution::hammingDistance(vector<int> A) {
    long long int n = A.size();
    long long int ans = 0;
    for (int i = 0; i < 32; i++) {
        int countOne = 0;
        for (int j = 0; j < n; j++) {
            if (A[j] & (1 << i)) {
                countOne++;
            }
        }
        ans += (countOne * (n - countOne)) * 2;
    }
    return ans % 1000000007;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n = 0,num=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            v.push_back(num);
        }
        Solution* solution = new Solution(v);
        cout << solution->hammingDistance(v) << endl;
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
