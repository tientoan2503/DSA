#include <iostream>

using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long numberOfOdds = ((n + 1) / 2);

    if (k > numberOfOdds)
    {
        cout << 2 * (k - numberOfOdds);
    }
    else
    {
        cout << 2 * k - 1;
    }
}