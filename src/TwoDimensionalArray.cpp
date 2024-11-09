#include <iostream>
#include <vector>
using namespace std;

class TwoDimensionalArray {
private:
    vector<vector<int>> array;

public:
    // Insert a new row
    void insertRow(const vector<int>& row) {
        array.push_back(row);
    }

    // Insert a new column
    void insertColumn(const vector<int>& column) {
        for (size_t i = 0; i < array.size(); ++i) {
            if (i < column.size()) {
                array[i].push_back(column[i]);
            } else {
                array[i].push_back(0); // Fill with 0 if column size is less
            }
        }
    }

    // Delete a specified row
    void deleteRow(int index) {
        if (index >= 0 && index < array.size()) {
            array.erase(array.begin() + index);
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    // Delete a specified column
    void deleteColumn(int index) {
        for (auto& row : array) {
            if (index >= 0 && index < row.size()) {
                row.erase(row.begin() + index);
            } else {
                cout << "Index out of bounds" << endl;
            }
        }
    }

    // Traverse the array
    void traverse() const {
        for (const auto& row : array) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

// Function to transpose a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    vector<vector<int>> transposed(matrix[0].size(), vector<int>(matrix.size()));
    
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[0].size(); ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    return transposed;
}
