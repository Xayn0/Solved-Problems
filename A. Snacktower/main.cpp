#include <iostream>
#include <queue>
using namespace std;

int main()
{priority_queue <int> pq;
int n,tmp; cin >> n;
int a[n];tmp = n;
for (int i = 0 ; i < n ; i++)
{
    cin >> a[i];
}
for (auto j : a)
{if(j != tmp)
    {cout << endl;
        pq.push(j);
    }
if (j == tmp)
{
    cout << j << " ";
    --tmp;
    if(!pq.empty()){
    while(pq.top() == tmp)
    {
        cout << pq.top()<<" ";
        pq.pop();
        --tmp;
    }
}cout << endl;}

}

    return 0;
}
