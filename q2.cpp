//Sushant Mishra
//2010990713
//set 03
//q2

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //taking the inputs
    vector<int> arr(n);
    for(auto &i: arr) cin>>i;

    int target; cin>>target;

    unordered_set<int> s;

    vector<vector<int>> ans;

    //logic for finding the pair
    for(auto &i: arr){
        //checking if target-i exist in set, if it can be found
        //then we can make a pair with that element 
        if(s.find(target-i) != s.end()){
            ans.push_back({i, target-i}); //if pair exists putting it into ans array
        }
        s.insert(i);
    }

    if(ans.size() == 0){
        cout<<"Pair not found"<<endl;
    }
    else{
        for(auto &v: ans){
            cout<<v[0]<<" "<<v[1]<<endl;
        }
    }
}