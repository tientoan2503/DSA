#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Số viên gạch theo chiều dọc: ceil(n / a)
    long long tiles_n = (n + a - 1) / a;
    // Số viên gạch theo chiều ngang: ceil(m / a)
    long long tiles_m = (m + a - 1) / a;

    // Tổng số viên gạch
    cout << tiles_n * tiles_m << endl;

    return 0;
}
