#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        if (l + m >= 0) {
            cout << l << ' ' << l + m << endl;
        } else {
            cout << -m << ' ' << 0 << endl;
        }
    }
}