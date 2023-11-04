#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int t = 3;
while(t--){
    ll n, k;
    cin>> n>> k;
    int arr[n];
    queue<int> q;
    q.push(1);
    vector<pair<int,int>> monsters;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      int curr_power = arr[i]%k;
      if(!curr_power && q.size()) arr[i]=k;
      else arr[i] = curr_power;
      if(q.size()) monsters.push_back({arr[i],-i});
    }
    sort(all(monsters));
    reverse(all(monsters));
    for(auto v:monsters){
      int k = v.second;
      k=-k;
      k++;
      cout<<k<<" ";
    }
    cout<<endl;
}