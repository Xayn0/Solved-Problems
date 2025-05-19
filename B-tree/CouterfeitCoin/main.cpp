#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int>& arr, int left,
           int mid, int right)
{int cnt = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;


    vector<int> L(n1), R(n2);


    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;


    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            cnt =  cnt + n1 - i;

        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;

    }


    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;

    }

return cnt;
}

int sortAndCount(vector<int>& arr, int left, int right)
{int cnt = 0;
    if (left >= right)
        return cnt;

    int mid = left + (right - left) / 2;
    cnt += sortAndCount(arr, left, mid);
    cnt += sortAndCount(arr, mid + 1, right);
    cnt += mergeAndCount(arr, left, mid, right);
    return cnt;

}
int main()
{
vector <int> a = {1,2,3,4,1,6,7};
cout << sortAndCount(a,0,a.size()-1);

    return 0;
}
