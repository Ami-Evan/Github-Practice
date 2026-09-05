#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
 
void solve() {
    string s; cin>>s;
    vector<char>code;
    vector<int>up,lo;
    for(auto x:s){
      if(x>='A' && x<='Z'){
        if(x=='B'){
          if(!up.empty()){
            int idx=up.back();
            up.pop_back();
            code[idx]='#';
          }
        }
        else{
          code.push_back(x);
          up.push_back(code.size()-1);
        }
      }
 
     else if(x>='a' && x<='z'){
        if(x=='b'){
          if(!lo.empty()){
            int idx=lo.back();
            lo.pop_back();
            code[idx]='#';
          }
        }
        else{
          code.push_back(x);
          lo.push_back(code.size()-1);
        }
      }
    }
 
    for(char y:code){
      if(y!='#'){
        cout<<y;
      }
    }
    cout<<endl;
}
 
int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}