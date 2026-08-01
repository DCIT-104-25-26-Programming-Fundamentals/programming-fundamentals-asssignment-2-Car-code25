#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> readMatrix(int rows, int cols)
{
    vector<vector<int>> matrix;

    for (int i = 0; i < rows; i++)
    {
        vector<int> row;

        cout << "Enter row " << i + 1 << ": ";

        for (int j = 0; j < cols; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }

        matrix.push_back(row);
    }

    return matrix;
}

void printMatrix(vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transpose;

    for (int j = 0; j < cols; j++)
    {
        vector<int> newRow;

        for (int i = 0; i < rows; i++)
        {
            newRow.push_back(matrix[i][j]);
        }

        transpose.push_back(newRow);
    }

    return transpose;
}

vector<vector<int>> addMatrices(vector<vector<int>> matrix1,
                                vector<vector<int>> matrix2)
{
    int rows = matrix1.size();
    int cols = matrix1[0].size();

    vector<vector<int>> result;

    for (int i = 0; i < rows; i++)
    {
        vector<int> row;

        for (int j = 0; j < cols; j++)
        {
            row.push_back(matrix1[i][j] + matrix2[i][j]);
        }

        result.push_back(row);
    }

    return result;
}

vector<vector<int>> multiplyMatrices(vector<vector<int>> matrix1,
                                     vector<vector<int>> matrix2)
{
    int rowsA = matrix1.size();
    int colsA = matrix1[0].size();
    int colsB = matrix2[0].size();

    vector<vector<int>> result;

    for (int i = 0; i < rowsA; i++)
    {
        vector<int> row;

        for (int j = 0; j < colsB; j++)
        {
            int total = 0;

            for (int k = 0; k < colsA; k++)
            {
                total += matrix1[i][k] * matrix2[k][j];
            }

            row.push_back(total);
        }

        result.push_back(row);
    }

    return result;
}

int main()
{
    while (true)
    {
        cout << "\n==============================" << endl;
        cout << "MATRIX OPERATIONS" << endl;
        cout << "==============================" << endl;
        cout << "1. Transpose Matrix" << endl;
        cout << "2. Add Two Matrices" << endl;
        cout << "3. Multiply Two Matrices" << endl;
        cout << "4. Quit" << endl;

        int choice;

        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1)
        {
            int rows, cols;

            cout << "Enter number of rows: ";
            cin >> rows;

            cout << "Enter number of columns: ";
            cin >> cols;

            cout << "Enter the matrix:" << endl;

            vector<vector<int>> matrix = readMatrix(rows, cols);

            cout << "\nOriginal Matrix:" << endl;
            printMatrix(matrix);

            cout << "\nTransposed Matrix:" << endl;
            printMatrix(transposeMatrix(matrix));
        }
        else if (choice == 2)
        {
            int rows, cols;

            cout << "Enter number of rows: ";
            cin >> rows;

            cout << "Enter number of columns: ";
            cin >> cols;

            cout << "Enter Matrix A:" << endl;
            vector<vector<int>> matrix1 = readMatrix(rows, cols);

            cout << "Enter Matrix B:" << endl;
            vector<vector<int>> matrix2 = readMatrix(rows, cols);

            cout << "\nSum of Matrices:" << endl;
            printMatrix(addMatrices(matrix1, matrix2));
        }
        else if (choice == 3)
        {
            int rowsA, colsA, rowsB, colsB;

            cout << "Enter rows for Matrix A: ";
            cin >> rowsA;

            cout << "Enter columns for Matrix A: ";
            cin >> colsA;

            cout << "Enter Matrix A:" << endl;
            vector<vector<int>> matrix1 = readMatrix(rowsA, colsA);

            cout << "Enter rows for Matrix B: ";
            cin >> rowsB;

            cout << "Enter columns for Matrix B: ";
            cin >> colsB;

            if (colsA != rowsB)
            {
                cout << "Matrix multiplication is not possible." << endl;
                continue;
            }

            cout << "Enter Matrix B:" << endl;
            vector<vector<int>> matrix2 = readMatrix(rowsB, colsB);

            cout << "\nProduct of Matrices:" << endl;
            printMatrix(multiplyMatrices(matrix1, matrix2));
        }
        else if (choice == 4)
        {
            cout << "Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please choose between 1 and 4."
                 << endl;
        }
    }

    return 0;
}