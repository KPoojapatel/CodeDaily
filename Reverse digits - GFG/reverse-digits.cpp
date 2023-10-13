//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    
		    long long int reverse=0;
		    while(n>0){
		        long long int remender = n%10;
		        reverse = reverse*10+remender ;
		        n=n/10;
		    }
		    return reverse;
		}


    //     long long int reverse = 0;
    //     while (n > 0) {
    //         long long int remainder = n % 10;
    //         reverse = reverse * 10 + remainder;
    //         n = n / 10;
    //     }
    //     return reverse;
    // }

};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends