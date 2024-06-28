#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, vector<int>&ds, int idx, int sum){
    if(idx == arr.size()){
        int currsum = 0;
        for(auto i:ds){
            currsum += i;
        }
        if(currsum == sum){
            return 1;
        }
        return 0;     
    }


    // take the idx element and store in ds
    ds.push_back(arr[idx]);
    int l = solve(arr,ds,idx+1,sum);

    ds.pop_back();

    // not take the idx element 
    int r = solve(arr,ds,idx+1,sum);

    return l+r;
}

int main()
{ 
    
    vector<int>arr = {1,3,2,4};
    vector<int>ds = {};
    int S = 6;
    cout<<solve(arr,ds,0,S)<<endl;
    return 0;
}
