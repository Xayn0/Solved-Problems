#include <iostream>

using namespace std;

int main()
{bool o = false;
string a , b;
cin >> a >> b;
if(a.size()!=b.size()) cout << max(a.size(), b.size());
else
{
    for (int i = 0 ; i < a.size();i++)
    {
        if(a[i] != b[i]){o = true;break;}
    }
if(o)cout << a.size();
if(!o) {cout << -1;}
}


    return 0;
}
