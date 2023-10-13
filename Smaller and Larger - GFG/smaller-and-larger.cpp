//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	   vector<int> result(2, 0);  // Initialize a vector with two zeros for counts.
        for (int i = 0; i < n; i++) {
            if (arr[i] <= x) {  // Count elements less than or equal to x.
                result[0]++;
            }
            if (arr[i] >= x) {  // Count elements more than or equal to x.
                result[1]++;
            }
        }
        return result;
    }
};







//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends