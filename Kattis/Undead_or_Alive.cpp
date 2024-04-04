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

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}

int diff(int a, int b)
{
    return b - a;
}

bool check_palindrome(string s)
{
    string a = s;
    reverse(a.begin(), a.end());
    if (s == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check_square(int n)
{
    int s = sqrt(n);
    return s * s == n;
}

bool check_cube(int n)
{
    int s = round(cbrt(n));
    return s * s * s == n;
}

bool check_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isComposite(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

char findLastUppercase(const std::string &s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (isupper(s[i]))
        {
            return s[i];
        }
    }
    // If no uppercase character is found, you can return a default value or handle it accordingly.
    return '\0'; // '\0' represents null character.
}

char findLastLowercase(const std::string &s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (islower(s[i]))
        {
            return s[i];
        }
    }
    // If no lowercase character is found, you can return a default value or handle it accordingly.
    return '\0'; // '\0' represents null character.
}

int sum_d(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int findMaxOccurrence(const vector<int> &arr)
{
    unordered_map<int, int> occurrenceMap;

    int maxOccurrence = 0;

    for (int num : arr)
    {
        maxOccurrence = max(maxOccurrence, ++occurrenceMap[num]);
    }

    return maxOccurrence;
}

int main()
{
    optimize();
    string input;
    getline(cin, input);

    bool hasSmile = input.find(":)") != string::npos;
    bool hasSad = input.find(":(") != string::npos;

    if (hasSmile && hasSad)
    {
        cout << "double agent" << endl;
    }
    else if (hasSmile && !hasSad)
    {
        cout << "alive" << endl;
    }
    else if (!hasSmile && hasSad)
    {
        cout << "undead" << endl;
    }
    else
    {
        cout << "machine" << endl;
    }

    return 0;
}
