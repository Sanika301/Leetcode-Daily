#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int countKDistinctSubstrings(const string& s, int k) {
    unordered_map<char, int> charCount;
    int count = 0;
    int left = 0;
    int distinctCount = 0;

    for (int right = 0; right < s.size(); right++) {
        char currentChar = s[right];

        // Update the count of the current character in the window
        charCount[currentChar]++;

        // If a new distinct character is added to the window, update distinctCount
        if (charCount[currentChar] == 1) {
            distinctCount++;
        }

        // If distinctCount exceeds k, move the left pointer to the right
        while (distinctCount > k) {
            char leftChar = s[left];
            charCount[leftChar]--;
            if (charCount[leftChar] == 0) {
                distinctCount--;
            }
            left++;
        }

        // If distinctCount is equal to k, all substrings within the window are valid
        if (distinctCount == k) {
            // The number of substrings ending at the current right pointer
            // is equal to the length of the window (right - left + 1)
            count += (right - left + 1);
        }
    }

    return count;
}

int main() {
    string s = "aba";
    int k = 2;
    int result = countKDistinctSubstrings(s, k);
    cout << "Total substrings with exactly " << k
         << " distinct characters : " << result << endl;
         cout<<countKDistinctSubstrings(s, k-1)<<endl;

    return 0;
}
