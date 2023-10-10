//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
    // Check if n is a positive integer
    if (n <= 0) {
        return "No";
    }

    int originalN = n;
    int sum_of_cubes = 0;

    // Calculate the sum of the cubes of digits
    while (n > 0) {
        int digit = n % 10;
        sum_of_cubes += pow(digit, 3);
        n /= 10;
    }

    // Check if it's an Armstrong number
    if (sum_of_cubes == originalN) {
        return "Yes";
    } else {
        return "No";
    }
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends