// Product in a grid
// https://projecteuler.net/problem=11
// largest product in a grid

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	int n = 20;
	int data[n][n];
	ifstream infile;
	infile.open("matrix.dat",ios::in);

	double a;
	int j = 0;
	int i = 0;
	for (int k = 0; k < 400; k++)
	{
		infile >> a;
		data[i][j] = (int)a;
		j+=1;
		if ((k+1)%20==0)
		{
			i+=1;
			j = 0;
		}
	}
	infile.close();
	
	int maxproduct = 0;
	int rproduct, cproduct,rdproduct,ldproduct;
	int r, c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-3; j++)
		{
			rproduct = data[i][j]*data[i][j+1]*data[i][j+2]*data[i][j+3]; /*max product when going right-left*/
			cproduct = data[j][i]*data[j+1][i]*data[j+2][i]*data[j+3][i]; /*max product when going up-down*/
			if (max(rproduct,cproduct) > maxproduct)
			{
				maxproduct = max(rproduct,cproduct);
			}
		}
	}

	for (int i = 0; i < n-3; i++)
	{
		for (int j = 0; j < n-3; j++)
		{
			rdproduct = data[i][j]*data[i+1][j+1]*data[i+2][j+2]*data[i+3][j+3]; /*max product when going diagonally right*/
			ldproduct = data[i][n-1-j]*data[i+1][n-1-j-1]*data[i+2][n-1-j-2]*data[i+3][n-1-j-3]; /*max product when going diagonally left*/
			if (max(rdproduct,ldproduct) > maxproduct)
			{
				maxproduct = max(rdproduct,ldproduct);
			}
		}
	}
	cout << maxproduct << "\n";
	return 0;
}