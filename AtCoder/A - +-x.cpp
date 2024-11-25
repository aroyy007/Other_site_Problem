#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ad = a + b;
    int sub = a - b;
    int mul = a * b;

    cout << max({ad, sub, mul}) << endl;
}
