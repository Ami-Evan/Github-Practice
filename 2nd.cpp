#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
void solve(){
  ll n,m; cin>>n>>m;
  map<string,string>mp;
  string name, ip;
 
  for(int i=0; i<n; i++){
    cin>>name>>ip;
    mp[ip]=name;
  }
  string command,ip1;
  for(int i=0; i<m; i++){
    string ip;
    cin>>command>>ip;
     ip1=ip;
     ip1.pop_back();
     cout<<command<<" "<<ip<<" #"<<mp[ip1]<<endl;
  }
}
 
int main() {
    fastio();
    //int t; cin >> t;
    //while(t--) 
    solve();
    return 0;  //yuytuyt
}