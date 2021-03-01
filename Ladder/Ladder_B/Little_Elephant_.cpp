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
	ll t, n, m, x, y, z;
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	int first_row = 0;
	int second_row = 0;
	int third_row = 0;
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			first_row += (arr[i][0] + arr[i][1] + arr[i][2]);
		}
		else if (i == 1) {
			second_row += (arr[i][0] + arr[i][1] + arr[i][2]);

		}
		else {
			third_row += (arr[i][0] + arr[i][1] + arr[i][2]);

		}
	}

	x = third_row;
	y = first_row;
	z = second_row;
	ll f_val = 0, s_val = 0, t_val = 0;
	if (x >= y) {
		f_val = ((x - y) + (z)) / 2;
		s_val = x - f_val;
		t_val = z - f_val;
	}
	else {
		t_val = ((y - x) + (z)) / 2;
		f_val = z - t_val;
		s_val = x - f_val;
	}

	arr[0][0] = f_val;
	arr[1][1] = s_val;
	arr[2][2] = t_val;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		} cout << endl;
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