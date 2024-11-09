#include "../src/RunLengthEncoding.cpp"

int main() {
    string input = "aaabbbcccaaa";
    
    string encoded = runLengthEncoding(input);
    
    cout << "Encoded String: " << encoded << endl; // Expected Output: "3a3b3c3a"

    return 0;
}
