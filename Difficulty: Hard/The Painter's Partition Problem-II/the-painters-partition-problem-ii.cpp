//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool check(int k, int mid, vector<int> arr ){
        int work = 0;
        int count = 1;
        for(int i = 0; i<arr.size();i++){
            work+=arr[i];
            if(work<=mid){
                continue;
            }
            count ++;
            work=arr[i];
        }
        if(count > k){
            return false;
        }
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        long lo = 0;
        long hi = 0;
        for (int i = 0 ;i<arr.size();i++){
            hi += arr[i];
            lo = max(lo, (long)arr[i]);
        }
        long ans = -1;
        while( lo<=hi){
            long mid = lo +(hi-lo)/2;
            if(check(k, mid, arr)){
                ans = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        int x = ans;
        return x;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends