/*
 * Not the fish.
 * iSea @ 2014-10-19 17:36
 */

#include <bits/stdc++.h>

using namespace std;

// Self Template Code BGEIN

#define sz(x) ((int)((x).size()))
#define out(x) printf(#x" %d\n", x)
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repf(i,a,b) for (int i = (a); i <= (b); ++i)
#define repd(i,a,b) for (int i = (a); i >= (b); --i)
#define repcase int t, Case = 1; for (scanf ("%d", &t); t; --t)
#define repeach(i,x) for (__typeof((x).begin()) i = (x).begin(); i != (x).end(); ++i)

typedef long long int64;
typedef pair<int, int> pii;

int sgn(double x) { return (x > 1e-8) - (x < -1e-8); }
int count_bit(int x) { return x == 0? 0 : count_bit(x >> 1) + (x & 1); }

template<class T> inline void ckmin(T &a, const T b) { if (b < a) a = b; }
template<class T> inline void ckmax(T &a, const T b) { if (b > a) a = b; }

// Self Template Code END

int main() {
	ios::sync_with_stdio(false);

	while (scanf ("%d", &MOD) != EOF) {
		scanf ("%d", &n);
		rep (i, n) {
			scanf ("%d", &a[i]);
		}
		sort (a, a + n);
		rep (i, n) {
			sum[i + 1] = sum[i] + a[i];
		}

		repcase {
			int M;
			scanf ("%d", &M);
			int numless = upper_bound(a, a + n, M) - a;
			int nummore = n - numless;
			rep (i, numless) {

			}
		}
	}
	return 0;
}