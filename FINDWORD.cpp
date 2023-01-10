/*______________________________________________________________________________________*/
/*|    Problem Name: [FINDWORD]                                                        |*/
/*|    Coder: toquangnhattink5                                                         |*/
/*|    Link of Problem: https://oj.vnoi.info/problem/hoclentop_prehsg11_1_b3           |*/
/*|    Created on January 9th, 2023.                                                   |*/
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
/*|*/ #define                 NAME    "FINDWORD"                                     /*|*/
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
string s[1002], str;
ll x, n(0), b[1002], k, v, z, pref[1002];
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    if (fopen(NAME".INP", "r"))
    {
        freopen(NAME".INP", "r", stdin);
        freopen(NAME".OUT", "w", stdout);
    }
    cin >> str;
    FOR(i, 0, str.length() - 1) 
        if (str[i] == '#') b[++n] = i;
    FOR(i, 1, n) cin >> s[i], sort(All(s[i]));
    cin >> x;
    pref[1] = s[1].length();
    FOR(i, 2, n) {
        z = i;
        if (pref[i - 1] <= 5E18 / s[i].length())
            pref[i] = pref[i - 1] * s[i].length();
        else break;
    }
    if (!pref[z]) z--;
    k = 0;
    FOR(i, 0, str.length() - 1) {
        if (str[i] != '#') {
            cout << str[i];
            continue;
        }
        ++k;
        FOR(j, 0, s[k].length() - 1) {
            if (k > z) {
                cout << s[k][j];
                break;
            }
            else {
                if (x > pref[z] / pref[k]) x -= pref[z] / pref[k];
                else {
                    cout << s[k][j];
                    break;
                }
            }
        }
    }
    return 0;
}
