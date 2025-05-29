#include <bits/stdc++.h>
using namespace std;

class Data
{
public:
    int jersey_no;
    char country[20];
};

int main()
{
    Data *Dhoni = new Data;
    Dhoni->jersey_no = 10, strcpy(Dhoni->country, "India");

    Data *Kohli = new Data;
    Kohli->jersey_no = 18;
    strcpy(Kohli->country, "India");

    *Kohli = *Dhoni;
    delete Dhoni;

    cout << Dhoni->jersey_no;

    delete Kohli;
    return 0;
}