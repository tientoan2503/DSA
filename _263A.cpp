#include <iostream>

using namespace std;
int main() {
    int array[5][5];
    int column, row;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> array[i][j];
            if (array[i][j] == 1) {
                row = i;
                column = j;
            }
        }
    }
    int result = abs(2 - row) + abs(2 - column);
    cout << result;
}