#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char s;
    int b;
    char q;
    int c;

    cin >> a >> s >> b >> q >> c;

    if (s == 43)
        a + b == c ? cout << "Yes" : cout << a + b;
    else if (s == 45)
        a - b == c ? cout << "Yes" : cout << a - b;
    else if (s == 42)
        a *b == c ? cout << "Yes" : cout << a * b;

    return 0;
}