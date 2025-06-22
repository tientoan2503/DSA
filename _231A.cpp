#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // input
    int numberOfProblems;
    cin >> numberOfProblems;
    cin.get();
    string problemSet[numberOfProblems];
    int problemCanResolve = 0;
    for (int i = 0; i < numberOfProblems; i++)
    {
        string s;
        getline(cin, s);    // nhập cả dòng chứa các số cách nhau bằng dấu cách
        stringstream ss(s); // tạo stream từ chuỗi input
        int number, sum = 0;
        while (ss >> number)
        { // đọc từng số nguyên từ chuỗi
            sum += number;
        }
        if (sum >= 2)
        {
            problemCanResolve++;
        }
    }
    cout << problemCanResolve << endl;
}