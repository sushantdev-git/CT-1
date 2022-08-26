//Sushant Mishra
//2010990713
//set 03
//q1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);

    for(auto &i: arr) cin>>i;

    sort(arr.begin(), arr.end());

    int i = 0,  j = n/2 + n%2;

    vector<int> ans;

    while(i < n/2 + n%2 || j < n){
        if(i < n/2 + n%2) ans.push_back(arr[i++]);
        if(j < n) ans.push_back(arr[j++]);
    }

    for(auto &i: ans) cout<<i<<" ";
    cout<<endl;
}