#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
const int mXn = 2e5 + 7;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
void fastIO() { ios_base::sync_with_stdio(false); cin.tie(NULL);}
ll LCM(ll a, ll b) {return a * b / gcd(a, b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}

vector<ll>sieve;
void sieve_erathosthenes(ll a) {
	sieve.assign(a, 0);
	for (int i = 2; i <= a; i++) {
		if (sieve[i])continue;
		for (int j = 2 * i; j <= a; j += i) {
			sieve[j] = i;
		}
	}
}
ll Totient_Coprime(ll n)
{
	ll result = n;
	for (ll p = 2; p * p <= n; ++p)
	{
		if (n % p == 0)
		{

			while (n % p == 0)
				n /= p;

			result -= result / p;
		}
	}
	if (n > 1)
		result -= result / n;

	return result;
}

void solve() {
	ll  n, x, y, m;
	// write your code here
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	ll  l[mXn], r[mXn];
	ll i = 0;
	ll j = 0;
	while (i < m) {
		while (s[j] != t[i]) {
			j++;
		}
		l[i] = j;
		i++;
		j++;

	}
	i = m - 1;
	j = n - 1;
	while (i >= 0) {
		while (s[j] != t[i]) {
			j--;
		}
		r[i] = j;
		j--;
		i--;
	}

	ll ans = 0;
	for (ll k = 1; k < m; k++) {
		ans = max(ans, r[k] - l[k - 1]);

	}
	cout << ans << "\n";
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