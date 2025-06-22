#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    cin.get();
    for (int i = 0; i < tc; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << endl;
    }
}