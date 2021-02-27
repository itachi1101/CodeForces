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
	// write code here
	cin >> n >> m;
	map<string, string>lang;
	while (m--) {
		string temp1, temp2;
		cin >> temp1 >> temp2;
		lang[temp1] = temp2;
	}
	vector<string>lec;
	while (n > 0) {
		string s;
		cin >> s;
		if (s == " ") {
			continue;
		}
		else {
			lec.pb(s);
			n--;
		}
	}
	vector<string>answer;
	for (auto child : lec) {
		string temp = child;
		int len_first = sz(temp);
		int len_second = sz(lang[temp]);
		if (len_second < len_first)answer.pb(lang[temp]);
		else if (len_second == len_first)answer.pb(temp);
		else answer.pb(temp);
	}





	for (auto child : answer) {
		cout << child << " ";
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