#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI 3.141592653589793
#define setBitCount(x) __builtin_popcount(x)
#define all(a) (a).begin(), (a).end()
#define all_r(a) (a).rbegin(), (a).rend()
#define sz(x) (int)(x.size())
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const int mXn = 2e5 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
void fastIO() { ios_base::sync_with_stdio(false); cin.tie(NULL);}
ll LCM(ll a, ll b) {return a * b / gcd(a, b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}

void solve() {
	ll t, n, x, y, m;
	// write your code here
	cin >> n >> t;
	vector<lld>v;
	for (ll i = 0; i < n; i++) {
		lld d;
		cin >> d;
		v.pb(d);
	}
	sort(all(v));
	lld	 ans = 0;
	ans = max(ans, max(v[0], t - v[n - 1]));
	for (ll i = 1; i < n - 1; i++) {
		ans = max(ans, (v[i] - v[i - 1]) / 2.00);
	}
	cout << fixed << setprecision(9) << ans;




}
int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	solve();
	return 0;
}