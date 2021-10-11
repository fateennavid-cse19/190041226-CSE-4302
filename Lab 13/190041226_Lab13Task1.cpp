#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={0}, j = 0;
    set <int> st;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1) st.insert(i);
        else a[++j] = i;
    }
    for(auto i:st) cout<< i<< " ";
    cout<<endl;
    for(int i=1;i<=5;i++)  cout<<a[i]<<" ";
    cout<<endl;
    vector <int> v(100);
    merge(a, a + 6, st.begin(), st.end(), v.begin()+5);
    for (auto i= v.begin();i!=v.end();++i) cout << *i << " ";
    return 0;
}
