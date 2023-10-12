//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    if (k > n) {
            // Invalid input, K is out of range.
            return;
        }
        
        // Calculate the index of Kth element from the beginning and end.
        int k_from_beginning = k - 1;          // Index is 0-based, so subtract 1.
        int k_from_end = n - k;                // Index is 0-based.
        
        // Swap the values of the Kth element from the beginning and end.
        int temp = arr[k_from_beginning];
        arr[k_from_beginning] = arr[k_from_end];
        arr[k_from_end] = temp;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.swapKth(arr, n, k);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends