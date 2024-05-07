#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
    ll n, i;
    cin >> n;
    unordered_map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    bool f = 0;
    for (auto j : mp)
    {
        for (auto k : mp)
        {
            if (j.first == k.first && j.second == 1)
                continue;
            ll x = -(j.first + k.first);
            if (mp.find(x) != mp.end())
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            break;
        }
    }
    if (f)
    {
        coy;
    }
    else
    {
        con;
    }

    return 0;
}
