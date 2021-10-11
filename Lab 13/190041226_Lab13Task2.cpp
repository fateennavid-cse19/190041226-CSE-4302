#include<bits/stdc++.h>
using namespace std;

namespace first
{
    int a = 100;
}

namespace my_namespace
{
    string a="fateen";
}

int main()
{
    cout << first::a <<endl;
    cout << my_namespace::a<<endl;
}

