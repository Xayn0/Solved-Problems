#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long ans,t,n,p,q,a[100005];
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> p >> q;
        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < p+1; i++)
        {
            if(a[n-i]>0)
            {
                ans+=a[n-i];
                a[n-i] = 0;
            }
        }
        for (int j = 0; j < q; j++)
        {
            if(a[j]<0)
            {
                ans-= a[j];
                a[j] = 0;
            }
        }
        cout << ans << endl;
    }


    return 0;
}
