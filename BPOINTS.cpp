/*______________________________________________________________________________________*/
/*|    Problem Name: [BPOINTS]                                                         |*/
/*|    Coder: toquangnhattink5                                                         |*/
/*|    Link of Problem: https://oj.vnoi.info/problem/hoclentop_prehsg11_1_b2           |*/
/*|    Created on January 10th, 2023.                                                  |*/
/*______________________________________________________________________________________*/
/*|*/ #include <bits/stdc++.h>                                                       /*|*/
/*|*/ using namespace std;                                                           /*|*/
/*______________________________________________________________________________________*/
/*|*/ #define                   ll    long long int                                  /*|*/
/*|*/ #define                  ull    unsigned long long int                         /*|*/
/*|*/ #define                  pii    pair<int, int>                                 /*|*/
/*|*/ #define                  pll    pair<ll, ll>                                   /*|*/
/*|*/ #define                 pqpl    priority_queue<ll>                             /*|*/
/*|*/ #define                 pqph    priority_queue<ll, vector<ll>, greater<ll>>    /*|*/
/*|*/ #define                 NAME    "BPOINTS"                                      /*|*/
/*|*/ #define                 endl    "\n"                                           /*|*/
/*|*/ #define     ForR(x, l, r, v)    for (int x = l; x <= r; x += v)                /*|*/
/*|*/ #define     RevR(x, r, l, v)    for (int x = r; x >= l; x -= v)                /*|*/
/*|*/ #define         FOR(x, l, r)    ForR(x, l, r, 1)                               /*|*/
/*|*/ #define         REV(x, r, l)    RevR(x, r, l, 1)                               /*|*/
/*|*/ #define               All(V)    V.begin(), V.end()                             /*|*/
/*|*/ #define              RAll(V)    V.rbegin(), V.rend()                           /*|*/
/*|*/ #define    AscRange(l, r, A)    sort(A + l, A + r + 1)                         /*|*/
/*|*/ #define    DecRange(l, r, A)    sort(A + l, A + r + 1, greater<ll>())          /*|*/
/*|*/ #define         MultiTest(T)    int T; cin >> T; while (T--)                   /*|*/
/*|*/ #define      PrintDec(db, d)    cout << setprecision(d) << fixed << db         /*|*/
/*|*/ #define     last_element(vt)    vt[vt.size() - 1]                              /*|*/
/*|*/ #define             len(str)    str.length()                                   /*|*/
/*|*/ #define ge_lid(l, r, arr, x)    lower_bound(arr + l, arr + r + 1, x) - arr     /*|*/
/*|*/ #define  g_lid(l, r, arr, x)    upper_bound(arr + l, arr + r + 1, x) - arr     /*|*/
/*______________________________________________________________________________________*/
/*|*/                                                                                /*|*/
/*______________________________________________________________________________________*/
/*|*/ ll GCD (ll x, ll y) { return (!(y) ? x : GCD(y, x % y)); }                     /*|*/
/*|*/ ll LCM (ll x, ll y) { return x / GCD(x, y) * y; }                              /*|*/
/*|*/ ll TurnOff (ll num, ll bit) { return (num & ~(1 << bit)); }                    /*|*/
/*|*/ ll TurnOn (ll num, ll bit) { return (num | (1 << bit)); }                      /*|*/
/*|*/ ll GetBit (ll num, ll bit) { return ((num >> bit) & 1); }                      /*|*/
/*|*/ ll Mask (ll bit) { return (1 << bit); }                                        /*|*/
/*|*/ ll Add_Modulo (ll a, ll b, ll M) { return ((a % M) + (b % M)) % M; }           /*|*/
/*|*/ ll Sub_Modulo (ll a, ll b, ll M) { return ((a % M) + M - (b % M)) % M; }       /*|*/
/*|*/ ll Mul_Modulo (ll a, ll b, ll M) { return ((a % M) * (b % M)) % M; }           /*|*/
/*|*/ ll Pow (ll x, ll y) { if (!y) return 1;                                        /*|*/
/*|*/     ll base = Pow(x, y / 2LL);                                                 /*|*/
/*|*/     base *= base;                                                              /*|*/
/*|*/     return base * ((y & 1) ? x : 1);                                           /*|*/
/*|*/ }                                                                              /*|*/
/*|*/ ll Pow_Modulo (ll x, ll y, ll z) { if (!y) return 1LL;                         /*|*/
/*|*/     ll base = Pow_Modulo(x, y / 2, z) % z;                                     /*|*/
/*|*/     base = Mul_Modulo(base, base, z);                                          /*|*/
/*|*/     return Mul_Modulo(base, ((y & 1) ? x : 1), z);                             /*|*/
/*|*/ }                                                                              /*|*/
/*______________________________________________________________________________________*/
/*                      -> END OF TEMPLATE - TIME FOR THE MAIN CODE <-                  */
const int X = 5E6 + 56;
int m, n, a[X], b[X], z(0);
ll T(0);
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    if (fopen(NAME".INP", "r"))
    {
        freopen(NAME".INP", "r", stdin);
        freopen(NAME".OUT", "w", stdout);
    }
    cin >> n >> m;
    FOR(i, 1, n) cin >> a[i];
    FOR(j, 1, m) cin >> b[j];
    FOR(i, 1, n) {
        while (z < m && b[z + 1] < a[i]) z++;
        T += 1LL * z;
    }
    cout << T;
    return 0;
}
