#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<=n;i++)
#define pa pair<ll,ll>
#define vec vector<ll>
#define pb push_back
#define in insert
#define mp make_pair
#define F first
#define S second
//memset(x, 0, sizeof(x))
ll inf = (ll)1e18;
ll mod = 1e9 + 7;
ll max1 = (ll)1e9;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("err.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i, j, k, n, m, ct = 0, t, ans = 0;
	cin >> n;
	ll a[n];
	for (i = 0; i < n; i++) cin >> a[i];
	if (n == 1) {
		cout << "1 1\n";
		cout << "0\n";
		cout << "1 1\n";
		cout << "0\n";
		cout << "1 1\n"; k = -a[0];
		cout << k << endl;
	}
	else {
		cout << "1 1\n"; k = -a[0];
		cout << k << endl;
		cout << "2 " << n << endl;
		vector<ll> vect; vect.pb(0);
		for (i = 1; i <= n - 1; i++) {
			j = a[i] % (n );
			ll rem = j;

			k = rem * (n - 1);
			cout << k << " ";
			vect.pb(k + a[i]);
		}
		cout << endl;
		cout << "1 " << n << endl;
		for (i = 0; i <= n - 1; i++) {
			k = -vect[i];
			cout << -vect[i] << " ";
		}
	}
	return 0;
}
