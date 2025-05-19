#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
pair<int, int> findMinMax(const vector<int>& arr, int start, int end) {

    if (start == end) {
        return {arr[start], arr[start]};
    }


    int mid = start + (end - start) / 2;


    auto leftResult = findMinMax(arr, start, mid);

    auto rightResult = findMinMax(arr, mid + 1, end);


    int minVal = min(leftResult.first, rightResult.first);
    int maxVal = max(leftResult.second, rightResult.second);

    return {minVal, maxVal};
}

int main() {
    vector<int> arr = {3, 5, -11, 8, 1312, 2, 9, 6};

    if (arr.empty()) {
        cout << "Array is empty." << std::endl;
        return 0;
    }

    auto result = findMinMax(arr, 0, arr.size() - 1);

    cout << "Minimum element: " << result.first << std::endl;
    cout << "Maximum element: " << result.second << std::endl;

    return 0;
}
