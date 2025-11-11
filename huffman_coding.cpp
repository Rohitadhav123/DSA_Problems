#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int freq[256] = {0};   // array for character frequencies

    // Step 1: count frequency of each character
    for (int i = 0; i < text.length(); i++) {
        unsigned char ch = text[i];
        freq[ch]++;
    }

    // Step 2: find number of unique characters
    int uniqueCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            uniqueCount++;
    }

    // Step 3: store unique characters and frequencies
    char chars[256];
    int f[256];
    int index = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            chars[index] = (char)i;
            f[index] = freq[i];
            index++;
        }
    }

    // Step 4: sort by frequency (descending)
    for (int i = 0; i < uniqueCount - 1; i++) {
        for (int j = i + 1; j < uniqueCount; j++) {
            if (f[i] < f[j]) {
                int temp = f[i];
                f[i] = f[j];
                f[j] = temp;

                char tempc = chars[i];
                chars[i] = chars[j];
                chars[j] = tempc;
            }
        }
    }

    // Step 5: assign simple binary-like codes (shorter for higher frequency)
    string codes[256];
    for (int i = 0; i < uniqueCount; i++) {
        string code = "";
        for (int j = 0; j <= i; j++) code += "1"; // longer code for lower freq
        codes[i] = code;
    }

    // Step 6: print results
    cout << "\nCharacter | Frequency | Code\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < uniqueCount; i++) {
        if (chars[i] == ' ')
            cout << "' ' (space)";
        else
            cout << "  " << chars[i] << "  ";
        cout << "          " << f[i] << "          " << codes[i] << "\n";
    }

    // Step 7: encode the string
    cout << "\nEncoded String: ";
    for (int i = 0; i < text.length(); i++) {
        for (int j = 0; j < uniqueCount; j++) {
            if (text[i] == chars[j]) {
                cout << codes[j];
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
