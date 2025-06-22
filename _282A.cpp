#include <iostream>
#include <string>

using namespace std;
int main()
{
    int programme;
    cin >> programme;
    cin.get();
    int sum = 0;
    for (int i = 0; i < programme; i++)
    {
        string statement;
        getline(cin, statement);
        if (statement.find("-") != string::npos) {
            sum--;
        } else {
            sum++;
        }
    }

    cout << sum;
}