#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
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
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]

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

// ll gcd(ll a, ll b)
// {
//     return __gcd(a, b);
// }
// ll lcm(ll a, ll b)
// {
//     return a * (b / gcd(a, b));
// }

// int diff(int a, int b)
// {
//     return b - a;
// }

// bool check_palindrome(string s)
// {
//     string a = "";
//     for (int i = 0; i < s.size(); ++i) {
//         char c = s[i];
//         if (isalnum(c)) {
//             a += tolower(c);
//         }
//     }
//     reverse(a.begin(), a.end());

//     return a == s;
// }

// bool check_square(ll n)
// {
//     ll s = sqrt(n);
//     return s * s == n;
// }

// bool check_cube(int n)
// {
//     int s = round(cbrt(n));
//     return s * s * s == n;
// }

// bool isComposite(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }

//     for (int i = 2; i <= n / 2; ++i)
//     {
//         if (n % i == 0)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// char findLastUppercase(const std::string &s)
// {
//     for (int i = s.size() - 1; i >= 0; --i)
//     {
//         if (isupper(s[i]))
//         {
//             return s[i];
//         }
//     }

//     return '\0';
// }

// char findLastLowercase(const std::string &s)
// {
//     for (int i = s.size() - 1; i >= 0; --i)
//     {
//         if (islower(s[i]))
//         {
//             return s[i];
//         }
//     }

//     return '\0';
// }

// int sum_d(int n)
// {
//     int sum = 0;
//     while (n > 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int findMaxOccurrence(const vector<int> &arr)
// {
//     unordered_map<int, int> occurrenceMap;

//     int maxOccurrence = 0;

//     for (int num : arr)
//     {
//         maxOccurrence = max(maxOccurrence, ++occurrenceMap[num]);
//     }

//     return maxOccurrence;
// }

// bool check_prime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int main()
{
    optimize();

    int n;
    cin >> n;
    vector<int> a(n);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    int ans = INT_MAX;
    for (int i = mn; i <= mx; i++)
    {
        int temp = 0;
        for (auto &val : a)
        {
            int diff = abs(i - val);  
            int seven = diff / 7;
            int three = (diff % 7) / 3;  // 4 
            int one = (diff % 7) % 3;  // 4 % 7 = 4 % 3 = 1
            temp += seven + three + one;
        }
        ans = min(ans, temp);
    }
    cout << ans << endl;

    return 0;
}
