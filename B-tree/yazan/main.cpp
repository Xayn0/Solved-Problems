#include <iostream>

using namespace std;

int main()
{
    int n,arr[100000];cin>>n;
    for(int i=0;i<n;i++){
        int x=0;cin>>x;
        arr[x]+=x;

    }
    int c=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]+arr[i-1]){
            arr[i-1]=0;
            arr[i+1]=0;

        }
        else arr[i]=0;

    }
    for(int i=1;i<n+1;i++)
        c+=arr[i];
    cout<<c;
}
