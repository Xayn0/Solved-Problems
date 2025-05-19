#include <iostream>

using namespace std;

int main()
{
int a [1003];
int n , h;
cin >> n >> h;
for (int i =0 ;i < n; i++)cin >> a[i];

int w = n;
for (int i = 0; i < n ;i ++) if (a[i] > h)w++;
cout << w;




    return 0;
}
