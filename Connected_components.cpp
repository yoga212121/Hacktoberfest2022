
//   ▄▄▄▄▄    ▄  █ ▄█    ▄   ▄█   ▄▀  ██   █▀▄▀█ ▄█     
//  █     ▀▄ █   █ ██     █  ██ ▄▀    █ █  █ █ █ ██     
//▄  ▀▀▀▀▄   ██▀▀█ ██ ██   █ ██ █ ▀▄  █▄▄█ █ ▄ █ ██     
// ▀▄▄▄▄▀    █   █ ▐█ █ █  █ ▐█ █   █ █  █ █   █ ▐█     
//              █   ▐ █  █ █  ▐  ███     █    █   ▐     
//             ▀      █   ██            █    ▀          
//                                     ▀                

#include <bits/stdc++.h>
using namespace std;

// *************************pbds***************************

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <class T> using oset = tree<T, null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ********************************************************

typedef long long int ll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) ((int)(v).size())
#define con(i,container) for(auto &i:container)
#define f(i, n) for (long long i = 0; i < n; i++)
#define f1(i, n) for (long long i = 1; i <= n; i++)
#define fo(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, n) for (long long i = n - 1; i >= 0; i--)
#define rf1(i, n) for (long long i = n; i >= 1; i--)
#define rfo(i, a, b) for (long long i = a - 1; i >= b; i--)

#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define shnigami std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << (x) << '\n'
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ff first
#define ss second
#define INF (9223372034707292159ll)
typedef unsigned long long ull;
typedef long double lld;

#define pii pair<ll,ll>
#define mii map<ll,ll>
#define vi vector<ll> 
#define vvi vector<vector<ll>>
#define si set<ll> 
#define pq priority_queue<ll>
#define rpq priority_queue<ll, vector<ll>, greater<ll> >
#define mmap multimap 
#define uset unordered_set
#define mset multiset
#define umap unordered_map
#define array(a,n) ll a[n]; f(i,n) cin>>a[i];
#define array1(a,n) ll a[n+1]; f1(i,n) cin>>a[i];
#define array2(a,n,m) ll a[n][m]; f(i,n) f(j,m) cin>>a[i][j];

#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fil(x,y) memset(x,y,sizeof(x))
#define test ll TC; cin>>TC; while(TC--)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// bool is_prime[1000001];
// void sieve() {fill(is_prime, is_prime + 1000001, true); is_prime[0] = is_prime[1] = false; for (ll i = 2; i <= 1000000; i++) if (is_prime[i]) for (ll j = i * i; j <= 1000000; j += i) is_prime[j] = false;}
ll modexp(ll a, ll b){if(b==0)return 1;ll x=modexp(a,b/2);x=x*x%mod;if(b%2)x=x*a%mod;return x;}
ll modinv(ll a){return pwr(a,mod-2);}
ll moddiv(ll a,ll b){return a*modinv(b)%mod;}
ll modfact(ll n){ll res=1;for(ll i=2;i<=n;i++){res=res*i%mod;}return res;}
ll ncr(ll n, ll r) {if (n == r) return 1; if (r == 0) return 1; if (r == 1) return n; ll ans = 1; for (ll i = 1; i <= r; i++) ans = (ans * (n - i + 1)) / i; return ans;}
ll npr(ll n, ll r) {if (n == r) return 1; if (r == 0) return 1; ll ans = 1; for (ll i = 1; i <= r; i++) ans = (ans * (n - i)) / i; return ans;}

// ********************************************************

#define trace(x) cout << '>' << #x << ':' << x << endl;
#define trace2(x, y)                                                           \
        cout << '>' << #x << ':' << x << " | " << #y << ':' << y << endl;
#define trace3(x, y, z)                                                        \
        cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | "      \
             << #z << ':' << z << endl;
#define trace4(x, y, z, w)                                                     \
        cout << '>' << #x << ':' << x << " | " << #y << ':' << y << " | "      \
             << #z << ':' << z << " | " << #w << ':' << w << endl;

// ********************************************************

template <typename T> ostream &operator<<(ostream &os, const vector<T> &m) {
        for (int i = 0; i < m.size(); ++i)
                os << m[i] << ' ';
        os << endl;
        return os;
}

template <typename T> istream &operator>>(istream &is, vector<T> &m) {
        for (int i = 0; i < m.size(); ++i)
                is >> m[i];
        return is;
}

// ********************************************************
void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}\n";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]\n";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]\n";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]\n";}

void inout() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


// EVERY SINGLE QUES TAKES YOU TOWARDS YOUR GOAL :) 

// ********************************************************

const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];
void dfs(int vertex){
    vis[vertex]=true;
    for(int child:g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
void solve()
{

    int n,e;
    cin>>n>>e;
     f(i,e){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
     }
     int cnt=0;
   f1(i,n){
    if(vis[i]) continue;
    dfs(i);
    cnt++;
   }
   cout<<cnt;
}


signed main()
{
    shnigami;

    inout();

    solve();

return 0;   
}
 
/* 
   * stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/
