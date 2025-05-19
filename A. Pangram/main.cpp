#include <iostream>

using namespace std;
bool contains (string st, char ch){
for (int i = 0 ; i < st.size() ; i++)
{
    if (st[i] == ch)return true;
}
return false;
}

int main()
{int n; cin >> n;
string st;
cin >> st;
string A = "abcdefghijklmnopqrstuvwxyz";
if (n < 26)cout << "NO";
else
{
    for (auto i: A)
    {
        if(!(contains(st,i) || contains(st,char(int(i) - 32)))){cout << "NO"; return 0;}
    }
cout << "YES";
}

    return 0;
}
