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
	ll t, n, m, x, y;
	string s;
	cin >> s;
	map<ll, ll>val_cnt;
	cin >> t;
	n = 0;
	ll j = 0;
	y = 26;
	while (y--) {
		cin >> x;
		val_cnt[j] = x;
		n = max(n, x);
		j++;
	}

	ll ans = 0;

	for (ll i = 0; i < sz(s); i++) {

		ans += (i + 1) * val_cnt[s[i] - 'a'];
	}
	for (ll i = sz(s); i < sz(s) + t; i++) {
		ans += (i + 1) * n;
	}
	cout << ans;

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