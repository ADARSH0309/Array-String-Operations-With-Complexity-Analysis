// Include the StringAlgorithms source or header file to use its methods
#include "../src/StringAlgorithms.cpp" // Ensure the path is correct based on your project structure

// Main function to test the KMP pattern matching algorithm
int main() {
    // Create an object of the StringAlgorithms class to use its methods
    StringAlgorithms stringAlg;

    // Input text where the pattern will be searched
    string text = "abxabcabcaby";

    // Pattern to be found within the input text
    string pattern = "abcaby";
    
    // Call the KMPSearch method to search for the pattern in the text
    int result = stringAlg.KMPSearch(text, pattern);
    
    // Output the result of the search
    // If the pattern is found, 'result' contains the starting index of the first occurrence
    // If not found, 'result' will be -1 (as indicated by the method)
    cout << "Pattern found at index: " << result << endl; // Expected Output: Index of first occurrence

    return 0; // End of the main function
}
