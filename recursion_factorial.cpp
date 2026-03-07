#include <iostream>
using namespace std;

int factorial(int n) {
    // BASE CASE — stop here
    if (n == 1) return 1;

    // RECURSIVE CASE — call itself with smaller problem
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(5) << endl; // 120
    return 0;
}