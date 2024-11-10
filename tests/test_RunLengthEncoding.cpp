// Include the RunLengthEncoding header file or source file to use the runLengthEncoding function
#include "../src/RunLengthEncoding.cpp" // Ensure the path is correct based on your project structure

// Main function to test the Run Length Encoding functionality
int main() {
    // Input string to be encoded
    string input = "aaabbbcccaaa";
    
    // Call the runLengthEncoding function and store the result in 'encoded'
    string encoded = runLengthEncoding(input);
    
    // Print the encoded string to the console
    cout << "Encoded String: " << encoded << endl; // Expected Output: "3a3b3c3a"

    return 0; // End of the main function
}
