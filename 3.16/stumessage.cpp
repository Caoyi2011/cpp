#include <bits/stdc++.h>
using namespace std;
int num = 0;
struct Stu
{
    string name;
    char gender;
    int age;
    double weight;
}a;

int main()
{
    cin >> a.name >> a.gender >> a.age >> a.weight;
    cout << a.name << " " << a.gender << " " << a.age << " ";
    printf("%.1f",a.weight);
    return 0;
}