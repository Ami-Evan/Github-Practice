#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
void solve(){
  set<string>st;
   int n; cin>>n;
   cin.ignore();
   while(n--){
    string s;
    getline(cin,s);
    if(st.count(s)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
       st.insert(s);
    }
     
   }
}
 
int main() {
    fastio();
    solve();
   //ttgdrtgrttr
   
  
    return 0;
}