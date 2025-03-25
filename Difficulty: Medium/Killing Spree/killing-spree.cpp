//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    long long int squares(long k){
        return (k*(k+1)*(2*k+1))/6;
    }
    long long int killinSpree(long long int n){
        long result = -1;
        long high=100000, low = 1;
        while(low<=high){
            long mid = low+((high-low)/2);
            if(squares(mid)<=n){
                result = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return result;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends