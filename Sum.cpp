#include <iostream>
using namespace std;
int main() {
    int n, sum;
    sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
