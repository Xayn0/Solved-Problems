#include <iostream>

using namespace std;

int main()
{
    int t,n , ans; cin >> t;
    while(t--){
        cin >> n;
        ans = n/4 + (n - 4 * (n/4) > 0);

        cout << ans << endl;
    }
    return 0;
}
