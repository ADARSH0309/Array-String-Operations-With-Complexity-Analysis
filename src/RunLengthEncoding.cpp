#include <iostream>
#include <string>
using namespace std;

// Function to perform Run Length Encoding (RLE)
string runLengthEncoding(const string& input) {
    string encoded = "";
    int count = 1;

    for (size_t i = 1; i <= input.length(); i++) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            encoded += to_string(count) + input[i - 1];
            count = 1;
        }
    }

    return encoded;
}
