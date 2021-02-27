#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1e9+7
#define PI 3.141592653589793
#define setBitCount(x) __builtin_popcount(x)
#define all(a) (a).begin(), (a).end()
#define all_r(a) (a).rbegin(), (a).rend()
#define sz(x) (int)(x.size())
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
const int mXn = 2e5 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
void fastIO() { ios_base::sync_with_stdio(false); cin.tie(NULL);}
ll LCM(ll a, ll b) {return a * b / gcd(a, b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
















void solve() {
	ll t, n, m, x, y;
	ll s;
	cin >> n >> s >> t;
	if (s == t) {
		cout << 0;
	}
	else
	{
		map<ll, ll>pos;
		x = 1;
		for (ll i = 1; i <= n; i++) {
			cin >> y;
			pos[i] = y;
		}

		x = pos[s];
		if (x == t) {
			cout << 1;
		}
		else {
			ll ans = 0;
			ll flag = 0;
			for (ll i = 2; i <= n; i++) {
				ll temp_pos = pos[x];
				ans++;
				if (temp_pos == t) {
					ans++;
					flag = 1;
					break;
				}
				x = temp_pos;
			}
			if (flag == 1) {
				cout << ans;
			} else {
				cout << -1;
			}
		}

	}

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