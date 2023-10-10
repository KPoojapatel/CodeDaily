//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str){
 for (char c : str) {
        if (c != '0' && c != '1') {
            return false; // Found a character that is not '0' or '1'
        }
    }
    return true; // All characters are '0' or '1'
}