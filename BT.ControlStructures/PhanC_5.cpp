#include <bits/stdc++.h>

using namespace std;

const string units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const string teens[] = {"ten", "eleven", "twelve", "thirdteen", "fourteen", "fifteen", "Sixteen", "seventeen", "eighteen", "nineteen"};
const string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string NumberToEnglish(int num) {
    if (num < 0) return "negative" + NumberToEnglish(-num);
    if (num == 0) return "zero";
    string s = "";
    if (num >= 1000000) {
        s += NumberToEnglish(num / 1000000) + " million ";
        num %= 10000000;
    }
    if (num >= 1000) {
        s += NumberToEnglish(num / 1000) + " thousand ";
        num %= 1000;
    } 
    if (num >= 100) {
        s += NumberToEnglish(num / 100) + " hundred ";
        num %= 100;
    }
    if (num >= 20) {
        s += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        s += teens[num-10];
        num = 0;
    }
    if (num > 0) {
        s += units[num];
        num = 0;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << NumberToEnglish(n);
    return 0;
}