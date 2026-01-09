#include <iostream>
using namespace std;

 // cout<<(a & b)<<endl;

    // cout<<(a | b)<<endl;

    // cout<<(a ^ b)<<endl;

    // cout<<(d ^ c)<<endl;

    // cout<<(4 << 1)<<endl;

    // cout<<(10 << 2)<<endl;

    // cout<<(10 >> 1)<<endl;

    // cout<<(8 >> 2)<<endl;

    // cout<<(10 >> 1)<<endl;

    // cout<<(10 << 2)<<endl;

    // cout<<(6 & 10)<<endl;

    // cout<<(6 | 10)<<endl;

    // cout<<(6 ^ 10)<<endl;

    // cout<<((5 - 2) * 6)<<endl; 

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    return reversed;
}

int y = 10; // Global scope - accessible everywhere

void fun() {
    cout << "Global y: " << y << endl;
}

// Fixed Power of Two Logic
bool isPowerOfTwo_LoopAndRightShift(unsigned int n) {
    if (n == 0) return false;
    int count = 0;
    while (n > 0) {
        if (n & 1) { // Check if the last bit is 1
            count++;
        }
        n = n >> 1; // Right shift to check next bit
    }
    return count == 1; // A power of 2 has exactly ONE '1' bit
}

int main() {
    // 1. Bitwise Practice
    int a = 4, b = 8;
    cout << "Bitwise AND (4 & 8): " << (a & b) << endl; // Result: 0

    // 2. Scope demonstration
    if (3 < 1) { } 
    else {
        int x = 10; // Local scope: exists ONLY in this else block
    }

    // 3. Data Sizes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;

    // 4. The Unsigned Trap
    // When you assign -10 to unsigned, it uses Two's Complement 
    // to create a very large positive number!
    unsigned int x_uns = -10; 
    cout << "Unsigned -10 looks like: " << x_uns << endl;

    // 5. Testing Power of Two
    unsigned int num1 = 16; 
    unsigned int num2 = 12; 
    cout << num1 << " is power of 2? " << (isPowerOfTwo_LoopAndRightShift(num1) ? "Yes" : "No") << endl;
    cout << num2 << " is power of 2? " << (isPowerOfTwo_LoopAndRightShift(num2) ? "Yes" : "No") << endl;

    // 6. Reverse Number
    int num = 1234;
    cout << "Original: " << num << " | Reversed: " << reverseNumber(num) << endl;

    return 0;
}