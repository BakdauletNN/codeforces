//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,sse4a,avx,avx2,popcnt,tune=native")
 
#include <bits/stdc++.h>
using namespace std;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
    return (unsigned long long)rng() % B;
}
 
 
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a,b) * b; }
 
ll modpow(ll a, ll e, ll m) {
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return r;
}
 
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << "\n";
#else
    #define debug(x)
#endif
 
clock_t startTime;
double getTime() { return (double)(clock() - startTime) / CLOCKS_PER_SEC; }
 
void solve() {
    int t; cin >> t;
    while (t--){
        int a,b; cin >> a >> b;
        if (a == b){
            cout << 0 << endl;
        }
        else if( a % b == 0 || b % a == 0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
 
    }
 
}
    
 
 
int main(){
    FAST_IO
    startTime = clock();
    solve();
    return 0;
}
