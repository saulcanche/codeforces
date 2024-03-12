#include <bits/stdc++.h>
using namespace std;

string decode(int encoded) {
    string result;
    int aux = 0;
    int index = 26;
    while (index > 0 && encoded > 0) {
        if (encoded >= index) {
            aux = encoded / index;
            for (int i = 0; i < aux; i++) {
                result += char(index + 'a' - 1);
            }
            encoded -= aux * index;
            index = encoded - 1;
        } else {
            index = encoded - 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int encoded_word;
        cin >> encoded_word;
        cout << decode(encoded_word) << endl;
    }
    return 0;
}
