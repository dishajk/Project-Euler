#include<iostream>
#include <stdio.h>
// #include <math.h>       /* sqrt */

using namespace std;

class Node {
public:
    long int data;
    Node* left,* right;

    Node(long int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
	Node* root = new Node(1);
	
	
	long int n = 1000000;
	long int max_chain_length = 0;

	for (long int i = n; i > 1; i --)
	
	
	
	// , fof[n], max;
	// fof[0] = 0;
	// fof[1] = 1;
	// max = 1;
	// for (long int i = 2; i < n; i++)
	// {
	// 	long int chain = 1;
	// 	long int j = i;
	// 	do
	// 	{	
	// 		if (j < i)
	// 		{
	// 			chain = chain + fof[j] - 1;
	// 			j = 1;
	// 			break;
	// 		}else{
	// 			if (j%2 == 0)
	// 			{
	// 				j = j/2;
	// 			}else{
	// 				j = 3*j + 1;
	// 			}
	// 			chain = chain + 1;
	// 		}
	// 	} while (j!=1);
	// 	fof[i] = chain;
	// 	if (fof[i] >= fof[max])
	// 	{	
	// 		max = i;
	// 		cout << max << "\t" << fof[max] << endl;
	// 	}
	// 	// cout << fof[77031] <<endl;
	// }
	return 0;
}
