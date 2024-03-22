#include <bits/stdc++.h>

using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        int digit = decimal % 2;
        binary = to_string(digit) + binary;
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int pow = 1;
    for (int i = binary.length()-1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow;
        }
        pow *= 2;
    }
    return decimal;
}

int main() {
    int decimal;
    cin >> decimal;

    cout << decimalToBinary(decimal) << endl;

    string binary;
    cin >> binary;
    
    cout << binaryToDecimal(binary) << endl;

    return 0;
}