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
	cin >> n >> m;
	ll a[n], b[n] = {0};
	for (i = 0; i < n; i++) cin >> a[i];
	ll freq[101] = {0};
	for (i = 0; i < n; i++) {
		ll req = m - a[i];
		ct = 1;
		for (j = 1; j <= 100; j++) {
			if (freq[j] > 0 && req >= j) {
				ll total = req / j;
				ll aval = min(total, freq[j]);
				req -= aval * j;
				ct += aval;
			}
		}
		freq[a[i]]++;
		cout << (i + 1) - ct << " ";
	}
	return 0;
}