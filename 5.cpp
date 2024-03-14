#include <iostriam>
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
    MaxMethods maxObj;

    cout << "Max of 5 and 10: " << maxObj.Max(5, 10) << endl;
    cout << "Max of 3, 8 and 2: " << maxObj.Max(3, 8, 2) << endl;
    cout << "Max of 4, 1, 7 and 2: " << maxObj.Max(4, 1, 7, 2) << endl;

    return 0;
}
