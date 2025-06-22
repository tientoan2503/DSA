#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int value;

    std::string s;
    std::cin >> s; // nhập cả chuỗi số liền nhau, ví dụ: 000123

    std::vector<int> arr(s.begin(), s.end());

    // Chuyển từng ký tự '0' -> số 0, '1' -> 1
    for (int& x : arr) x -= '0';

    for (int i = 0; i + 6 < static_cast<int>(arr.size()); i++)
    {
        if (arr[i] == arr[i + 6])
        {
            bool valid = true;
            for (int j = i + 1; j < i + 6; j++)
            {
                if (arr[j] != arr[i])
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
