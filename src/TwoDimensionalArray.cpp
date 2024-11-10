#include <iostream>
#include <vector>
using namespace std;

// Class to represent a two-dimensional array and perform various operations on it
class TwoDimensionalArray {
private:
    vector<vector<int>> array; // 2D vector to store the array data

public:
    // Method to insert a new row at the end of the 2D array
    void insertRow(const vector<int>& row) {
        array.push_back(row); // Add the row to the end of the array
    }

    // Method to insert a new column at the end of each row in the 2D array
    void insertColumn(const vector<int>& column) {
        for (size_t i = 0; i < array.size(); ++i) {
            // If the current row index is less than the size of the new column, insert the column element
            if (i < column.size()) {
                array[i].push_back(column[i]);
            } else {
                // If the row index exceeds the column size, fill with 0
                array[i].push_back(0);
            }
        }
    }

    // Method to delete a specified row by index
    void deleteRow(int index) {
        // Check if the index is within bounds
        if (index >= 0 && index < array.size()) {
            array.erase(array.begin() + index); // Remove the row at the given index
        } else {
            cout << "Index out of bounds" << endl; // Print error message for invalid index
        }
    }

    // Method to delete a specified column by index
    void deleteColumn(int index) {
        for (auto& row : array) {
            // Check if the index is within bounds for each row
            if (index >= 0 && index < row.size()) {
                row.erase(row.begin() + index); // Remove the column element at the given index
            } else {
                cout << "Index out of bounds" << endl; // Print error message for invalid index
            }
        }
    }

    // Method to traverse and print the 2D array
    void traverse() const {
        for (const auto& row : array) {
            for (int val : row) {
                cout << val << " "; // Print each element in the row
            }
            cout << endl; // Move to the next line after each row
        }
    }
};

// Function to compute and return the transpose of a given matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    // Create a new matrix with transposed dimensions
    vector<vector<int>> transposed(matrix[0].size(), vector<int>(matrix.size()));

    // Loop through each element in the matrix and place it in the transposed position
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[0].size(); ++j) {
            transposed[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }

    return transposed; // Return the transposed matrix
}
