#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char s;
    int b;

    cin >> a >> s >> b;

    if (s == 60)
        a < b ? cout << "Right" : cout << "Wrong";
    else if (s == 61)
        a == b ? cout << "Right" : cout << "Wrong";
    else if (s == 62)
        a > b ? cout << "Right" : cout << "Wrong";

    return 0;
}