#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll T;
    cin>>T;
    while(T--){
     string s;
        ll P;
        cin>>s>>P;
        ll len=s.size();
     
        
        ll ans=0;
        ll help=len;
       for(ll i=0;i<len;i++){
        
        for(ll j=1;j<=help;j++){
            string s1=s.substr(i,j);
            ll mul=1;
            for(ll k=0;k<s1.size();k++){
                mul=(mul*P)%1000000007;
            }
            for(ll k=0;k<s1.size();k++){
                ans+=(s1[k]-'a'+1)*mul%1000000007;
            }
        }
        help--;
       }
     cout<<ans%1000000007<<endl;
    }
    return 0;
}
