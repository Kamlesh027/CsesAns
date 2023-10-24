#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  

    string inputString;
    cin >> inputString;

    vector<int> characterCount(26); // Default value of the vector created is 0

    for (char c : inputString)
        characterCount[c - 'A']++;

    int oddCount = 0;
    for (int i = 0; i < 26; i++)
        oddCount = oddCount + (characterCount[i] % 2);

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    // Create the palindromic string

    string palindromicString;

    // Construct the left portion

    for (int i = 0; i < 26; i++) {
        if ((characterCount[i] % 2) == 0) {
            for (int j = 0; j < characterCount[i] / 2; j++)
                palindromicString.push_back(i + 'A');
        }
    }

    // Construct the mid portion
    for (int i = 0; i < 26; i++) {
        if (characterCount[i] % 2) {
            for (int j = 0; j < characterCount[i]; j++)
                palindromicString.push_back(i + 'A');
        }
    }

    // Construct the right portion
    for (int i = 25; i >= 0; i--) {
        if ((characterCount[i] % 2) == 0) {
            for (int j = 0; j < characterCount[i] / 2; j++)
                palindromicString.push_back(i + 'A');
        }
    }

    cout << palindromicString;
    return 0;
}
