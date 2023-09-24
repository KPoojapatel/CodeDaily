//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
   bool isAnagram(string a, string b) {
    if (a.size() != b.size())
        return false;

    int count[26] = {0}; // Assuming only lowercase characters

    for (char c : a)
        count[c - 'a']++;

    for (char c : b) {
        if (count[c - 'a'] == 0)
            return false;
        count[c - 'a']--;
    }

    return true;
}


};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends