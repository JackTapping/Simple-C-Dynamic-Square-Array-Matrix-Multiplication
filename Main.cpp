#include<iostream>

int main() {

	int rows = 0; 
	int columns = 0; 

	std::cout << "number of columns: ";
	std::cin >> columns;

	std::cout << "number of rows: ";
	std::cin >> rows;;

	int** matrix = new int* [rows];
	int** matrix2 = new int* [rows];
	int** matrix3 = new int* [rows];

	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[columns];
		matrix2[i] = new int[columns];
		matrix3[i] = new int[columns];
	}

	int count = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = count++;
			matrix2[i][j] = 1;
			matrix3[i][j] = 0;
		}
	}

	for (int i = 0; i < rows ; i++)
	{
		for (int j = 0; j < columns ; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				matrix3[j][i] += matrix2[i][k] * matrix[k][i];
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matrix3[i][j] << ", ";
		}

		std::cout << "\n";
	}

	return 0;
}
