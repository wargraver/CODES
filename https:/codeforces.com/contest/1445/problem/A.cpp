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
	cin >> t;
	while (t--) {
		cin >> n >> m;
		vector<ll> a, b;
		for (i = 0; i < n; i++) {
			cin >> j;
			a.pb(j);
		}
		for (i = 0; i < n; i++) {
			cin >> j;
			b.pb(j);
		}
		ll flag = 0;
		reverse(b.begin(), b.end());
		//for (i = 0; i < n; i++) cout << b[i] << " ";
		for (i = 0; i < n; i++) {
			//cout << a[i] + b[i] << endl;
			if (a[i] + b[i] > m) {
				flag = 1;
				break;
			}
		}
		if (flag == 0 ) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
