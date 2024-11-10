// Include the TwoDimensionalArray class and related methods
#include "../src/TwoDimensionalArray.cpp" // Make sure the file path is correct based on your project structure

// Main function to test TwoDimensionalArray operations and matrix transposition
int main() {
    // Create an object of the TwoDimensionalArray class to use its methods
    TwoDimensionalArray arr;

    // Insert a row into the 2D array with values {1, 2}
    arr.insertRow({1, 2});

    // Insert a column into the 2D array with values {3, 4}
    arr.insertColumn({3, 4});

    // Delete the row at index 0 (removes the first row)
    arr.deleteRow(0);

    // Display the array after performing the operations
    cout << "Array after operations:" << endl;
    arr.traverse(); // Expected Output: [[3, 4]]

    // Define a 2D matrix for testing the transpose function
    vector<vector<int>> matrix = {{1, 2}, {3, 4}};

    // Call the transposeMatrix function to get the transposed matrix
    vector<vector<int>> transposed = transposeMatrix(matrix);

    // Display the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (const auto& row : transposed) {
        for (int val : row) {
            cout << val << " "; // Print each element of the transposed row
        }
        cout << endl; // Move to the next line after each row
    } // Expected Output: [[1, 3], [2, 4]]

    return 0; // End of the main function
}
