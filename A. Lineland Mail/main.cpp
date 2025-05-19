#include <iostream>

using namespace std;
void mm (int a[], int i, int n)
{
    if(i == 0)
    {
        cout<<(a[1] -  a[0])<<" ";
        cout<<a[n - 1] - a[0];

    }
    else if(i == n-1)
    {
        cout << a[n-1] - a[n-2]<<" ";
        cout << a[n-1] - a[0];
    }
    else
    {
        if(a[i+1] - a[i]>a[i] - a[i-1])
        {
            cout << a[i] - a[i-1]<<" ";
        }
        else
        {
            cout << a[i+1] - a[i]<<" ";
        }
        if(a[n-1] - a[i] > a[i] - a[0])cout << a[n-1] - a[i];
        else cout << a[i] - a[0];
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n ; i++)
    {
        mm(a,i,n);
        cout << "\n";
    }

    return 0;
}
