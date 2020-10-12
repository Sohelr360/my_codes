/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-11 18:33:40
 *	  Link:    link
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    float v, t;
    while(cin>>v>>t) {
        if(v == 0 || t == 0)
            cout << 0 << endl;
        else {
            db a, ans;
            a = v / t;
            ans = .5 * a * sqr((t * 2));
            cout << fixed << setprecision(0) << ans << endl;
        }
        //cout << 2 * t * v<<endl; // s = v*t;
    }
    return 0;
}