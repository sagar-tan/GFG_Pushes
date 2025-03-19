//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    void help(int N, int temp, vector<int>& arr){
        arr.push_back(temp);
        if (temp<= 0){
            return ;
        }
        help(N, temp-5, arr);
        arr.push_back(temp);
    }
    vector<int> pattern(int N){
        vector<int> arr;
        int temp = N;
        help(N, temp, arr);
        return arr;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends