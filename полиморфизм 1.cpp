#include <iostream>
using namespace std;

class MaxMethods {
public:
    int Max(int a, int b) {
        return (a > b) ? a : b;
    }

    int Max(int a, int b, int c) {
        return Max(Max(a, b), c);
    }

    int Max(int a, int b, int c, int d) {
        return Max(Max(a, b, c), d);
    }
};

int main() {
    setlocale(LC_ALL,"RU");
    MaxMethods maxObj;

    cout << "Максимум из 5 и 10: " << maxObj.Max(5, 10) << endl;
    cout << "Максимум из 3, 8 и 2: " << maxObj.Max(3, 8, 2) << endl;
    cout << "Максимум из 4, 1, 7 и 2: " << maxObj.Max(4, 1, 7, 2) << endl;

    return 0;
}
