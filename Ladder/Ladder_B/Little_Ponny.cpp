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
	cin >> n;
	vector<ll>v;
	deque<ll>q;
	set<ll>s;
	for (ll i = 0; i < n; i++) {
		cin >> x;
		v.pb(x);
		q.pb(x);
		s.insert(x);
	}
	sort(all(v));

	if (sz(s) == 1) {cout << 0;}
	else
	{	ll start = 0;
		ll end = n - 1;
		ll ans = 0;
		while (q[end] <= q[start]) {
			ll temp = q[end];
			q.pop_back();
			q.push_front(temp);
			ans++;
		}

		for (ll i = 0; i < n; i++) {
			if (v[i] != q[i]) {
				ans = -1;
				break;
			}
		}

		cout << ans;
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