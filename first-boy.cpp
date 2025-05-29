#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    char name[20];
    int roll;
    int section;
    int math_marks;
    char cls[10];

    Students(char *name, int roll, int section, int math_marks, char *cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        strcpy(this->cls, cls);
    }
};

int main()
{

    Students messi("Messi", 1, 1, 100, "Inter");
    Students ronaldo("Ronaldo", 1, 1, 100, "Inter");
    Students neymar("Neymar", 1, 1, 101, "Inter");

    Students best = messi;

    if (ronaldo.math_marks > best.math_marks)
        best = ronaldo;

    if (neymar.math_marks > best.math_marks)
        best = neymar;

    cout << best.name << endl;

    return 0;
}