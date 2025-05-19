#include <bits/stdc++.h>
using namespace std;
int path (int  from , int to , int other){
int ans = 0;
if (min(from , other) < to && to < max(from,other))
{

     ans = abs(from  - to);
}
else
    ans = n - abs(from - to);


return ans;
}





int main(){
int  l = 1, r = 2 , q , n;
cin >> n >> q;






return 0;}
