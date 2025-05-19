#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int a[],int l,int r, int k)
{
    int mid = l + (r - l)/2;
    if(l > r)
        if(a[mid] == k)
            return mid;
        else
            return -1;
    else
    {
        mid = l + (r - l)/2;
        if(a[mid] == k)
            return mid;
        else if (a[mid] > k)
            return binarySearch(a,l,mid - 1,k);
        else
            return binarySearch(a,mid+ 1,r, k);
    }



}

int main()
{
    int a[] = {1,2,3,5,7,9,11,13,17,23,34};
    cout << binarySearch(a,0,11,11);


    return 0;
}
