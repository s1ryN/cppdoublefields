#include <iostream>
using namespace std;

int main() {
    // 1) Definice 2D pole: 5 řádků, 2 sloupce
    int arr[5][2] = {
        {0, 0},
        {1, 2},
        {2, 4},
        {3, 5},
        {8, 9}
    };

    // 2) Vytiskneme každý řádek jako "(x,y)"
    for (int i = 0; i < 5; ++i) {
        cout << "(";
        for (int j = 0; j < 2; ++j) {
            cout << arr[i][j];
            if (j == 0)            // mezi první a druhou hodnotou doplníme čárku
                cout << ",";
        }
        cout << ")" << endl;      // uzavřeme závorku a nový řádek
    }

    return 0;
}
