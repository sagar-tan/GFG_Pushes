//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int n = arr.size();
        int count = 0;
        unordered_map<int, int> freqMap;
        int prefixs = 0;
        for(int i=0; i<n;i++){
            prefixs=arr[i]+prefixs;
            if(prefixs==0){
                count++;
            }
            if(freqMap[prefixs]>0){
                count+= freqMap[prefixs];
                freqMap[prefixs]++;
            }
            else{
                freqMap[prefixs] = 1;
            }
            
            
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends