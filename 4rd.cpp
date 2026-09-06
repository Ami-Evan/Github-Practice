#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
 
void solve() {
    int n; cin>>n;
    set<pair<string,string>>s;
    for(int i=0; i<n; i++){
      string x,y; cin>>x>>y;
      s.insert({x,y});
    }
    
        cout<<s.size()<<endl;
    
}
 
int main() {
    fastio();
    // int t; cin >> t;
    // while(t--) 
    solve();
    return 0;
}