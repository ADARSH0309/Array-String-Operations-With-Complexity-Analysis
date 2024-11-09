#include "../src/TwoDimensionalArray.cpp"

int main() {
    TwoDimensionalArray arr;

    arr.insertRow({1, 2});
    arr.insertColumn({3, 4});
    arr.deleteRow(0);
    
    cout << "Array after operations:" << endl;
    arr.traverse(); // Expected Output: [[3,4]]

    vector<vector<int>> matrix = {{1, 2}, {3, 4}};
    vector<vector<int>> transposed = transposeMatrix(matrix);
    
    cout << "Transposed Matrix:" << endl;
    for (const auto& row : transposed) {
        for (int val : row) cout << val << " ";
        cout << endl; // Expected Output: [[1,3],[2,4]]
    }

    return 0;
}
