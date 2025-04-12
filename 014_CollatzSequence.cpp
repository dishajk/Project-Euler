#include<iostream>
#include <stdio.h>
#include <fstream>

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

void buildCollatzTree(Node* node, long int maxValue) {	
    if (node == nullptr || node->data >= maxValue) return;

    // Left child: always 2n
	long int leftVal = 2 * node->data;
    if (leftVal < maxValue) {
        node->left = new Node(leftVal);
        buildCollatzTree(node->left, maxValue);
    }

    // Right child: (n - 1)/3 only if n % 3 == 1 and result is a positive integer

    if (node->data % 6 == 4) {
        long int rightVal = (node->data - 1) / 3;
		if (rightVal== 1){
			return;
		}
        if (rightVal > 0 && rightVal < maxValue) {
            node->right = new Node(rightVal);
            buildCollatzTree(node->right, maxValue);
        }
    }
}

// void printTree(Node* node) {
//     if (node == nullptr) 
// 	{
// 		return;
// 	}
// 	cout << node->data << "\t";
//     // Print left child
// 	if(node->right){
// 		cout << "\n";
// 		printTree(node->right);
// 	}
//     printTree(node->left);
// }
void printTree(Node* node, int depth = 0, int* countOnLine = nullptr) {
    static int itemsOnPrevLine = 0;

    if (countOnLine == nullptr) {
        itemsOnPrevLine = 0;
        countOnLine = new int(0);
    }

    if (node == nullptr) return;

    // Print current node with depth

    cout << node->data << "(" << depth << ")\t";
    (*countOnLine)++;

    // Print right child on a new line, indented
    if (node->right) {
        cout << "\n";
        for (int i = 0; i < *countOnLine; i++) cout << "\t";
        int reset = 0;
        printTree(node->right, depth + 1, &reset);
    }

    // Print left child on same line
    printTree(node->left, depth + 1, countOnLine);

    if (depth == 0) delete countOnLine;
}


void saveTreeCoordinates(Node* node, std::ofstream& outFile, int depth = 0) {
    if (node == nullptr) return;

    // Save (depth, value) as a pair
    outFile << depth << " " << node->data << "\n";

    // Traverse left and right subtrees
    saveTreeCoordinates(node->left, outFile, depth + 1);
    saveTreeCoordinates(node->right, outFile, depth + 1);
}

int main()
{
	Node* root = new Node(1);
	
	long int n = 1000000;
	long int max_chain_length = 0;

	long int maxValue = n/100;  
    buildCollatzTree(root, maxValue);

    // printTree(root);  
	ofstream outFile("tree_coords.txt");
    saveTreeCoordinates(root, outFile);
    outFile.close();
	
	return 0;
}
