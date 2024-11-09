#include "../src/StringAlgorithms.cpp"

int main() {
    StringAlgorithms stringAlg;

    string text = "abxabcabcaby";
    string pattern = "abcaby";
    
    int result = stringAlg.KMPSearch(text, pattern);
    
    cout << "Pattern found at index: " << result << endl; // Expected Output: Index of first occurrence

    return 0;
}
