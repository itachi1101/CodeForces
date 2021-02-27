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
set<ll>tprime;
ll arr[1000007] = {0};
void T_prime() {
	tprime.insert(4);
	for (ll i = 3; i < (ll)1e6 + 1; i += 2) {
		if (arr[i] == 0) {
			tprime.insert(i * i);
			for (ll j = i; j <= 1e6; j += i) {
				arr[j] = 1;
			}
		}
	}
}
void solve() {
	ll t, n, m, x, y;
	cin >> n;
	T_prime();
	for (ll i = 0; i < n; i++) {
		cin >> x;
		if (tprime.find(x) != tprime.end()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO\n";
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