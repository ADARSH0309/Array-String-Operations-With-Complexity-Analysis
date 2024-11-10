#include <iostream>
#include <string>
using namespace std;

// Function to perform Run Length Encoding (RLE)
string runLengthEncoding(const string& input) {
    // Initialize an empty string to store the encoded result
    string encoded = "";

    // Initialize count to 1 for the first character
    int count = 1;

    // Loop through the input string starting from the second character
    for (size_t i = 1; i <= input.length(); i++) {
        // Check if the current character matches the previous character
        if (input[i] == input[i - 1]) {
            // If the characters match, increment the count
            count++;
        } else {
            // If the current character is different:
            // Append the count and the character to the encoded string
            // Convert the count to a string and concatenate with the character
            encoded += to_string(count) + input[i - 1];

            // Reset count to 1 for the new sequence of characters
            count = 1;
        }
    }

    // Return the final encoded result
    return encoded;
}
