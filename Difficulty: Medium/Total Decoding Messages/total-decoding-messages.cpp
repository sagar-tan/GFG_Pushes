//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countWays(string &digits) {
        if (digits.empty() || digits[0] == '0') 
        return 0;

    int n = digits.size();
    vector<int> dp(n + 1, 0);
    
    // Base cases
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        int single_digit = digits[i - 1] - '0';  // Last one digit
        int double_digit = stoi(digits.substr(i - 2, 2));  // Last two digits

        if (single_digit >= 1 && single_digit <= 9)
            dp[i] += dp[i - 1];  // Single-digit decoding

        if (double_digit >= 10 && double_digit <= 26)
            dp[i] += dp[i - 2];  // Two-digit decoding
    }

    return dp[n];
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends