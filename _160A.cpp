#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int sumRemain = 0;
    while (n--)
    {
        int value;
        cin >> value;
        sumRemain += value;
        arr.push_back(value);
    }

    std::sort(arr.begin(), arr.end());

    int numberOfCoin = 0;
    int sumTaken = 0;
    for (int i = 0; i < n; i++) {
        sumTaken += arr[i];
        sumRemain -= arr[i];
        if (sumTaken > sumRemain) break;
    }
    cout << numberOfCoin << endl;
}
