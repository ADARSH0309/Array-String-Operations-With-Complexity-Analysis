#include <iostream>
#include <vector>
using namespace std;

class StringAlgorithms {
public:
    // Function to compute the Longest Prefix Suffix (LPS) array for KMP pattern matching
    vector<int> computeLPS(const string& pattern) {
        int m = pattern.length(); // Length of the pattern
        vector<int> lps(m, 0);    // Initialize LPS array with 0s
        int len = 0;              // Length of the current longest prefix suffix
        int i = 1;                // Start from the second character

        // Loop to fill the LPS array
        while (i < m) {
            if (pattern[i] == pattern[len]) {
                // Characters match, increment length and assign it to lps[i]
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    // Mismatch after a match, use previous LPS value
                    len = lps[len - 1];
                } else {
                    // No prefix match found, set lps[i] to 0 and move to next character
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps; // Return the computed LPS array
    }

    // KMP algorithm to search for a pattern in the given text
    int KMPSearch(const string& text, const string& pattern) {
        int n = text.length();  // Length of the text
        int m = pattern.length(); // Length of the pattern

        // Compute the LPS array for the pattern
        vector<int> lps = computeLPS(pattern);

        int i = 0; // Index for the text
        int j = 0; // Index for the pattern

        // Traverse the text to search for the pattern
        while (i < n) {
            if (pattern[j] == text[i]) {
                // Characters match, move both indices forward
                i++;
                j++;
            }

            if (j == m) { // Full pattern matched
                return i - j; // Return the starting index of the match
                j = lps[j - 1]; // Reset j using LPS for potential further matches
            } else if (i < n && pattern[j] != text[i]) {
                // Mismatch after some matches
                if (j != 0)
                    j = lps[j - 1]; // Use LPS array to skip unnecessary comparisons
                else
                    i++; // Move to the next character in the text if no matches yet
            }
        }

        return -1; // Pattern not found in the text
    }
};
