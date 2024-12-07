#include <iostream>
#define ARRAY_SIZE 15
using namespace std;
// Function declarations
char* getData(char binaryTreeArray[], int index);
int leftChildIndex(int index);
int rightChildIndex(int index);

int main() {
    char binaryTreeArray[ARRAY_SIZE] = {'R', 'A', 'B', 'C', 'D', 'E', 'F', '\0', '\0', '\0', '\0', '\0', '\0', 'G', '\0'};
    int rightChild = rightChildIndex(0); // Index of the right child of the root
    int leftChildOfRightChild = leftChildIndex(rightChild); // Index of left child of the right child
    char* data = getData(binaryTreeArray, leftChildOfRightChild);
    
    if (data != NULL && *data != '\0') {
        cout << "root.right.left.data: " << *data << endl;
    } else {
        cout << "No data found." << endl;
    }
    return 0;
}
// Function definitions
char* getData(char binaryTreeArray[], int index) {
    if (index >= 0 && index < ARRAY_SIZE) {
        return &binaryTreeArray[index];
    }
    return NULL;
}
int leftChildIndex(int index) {
    return 2 * index + 1;
}
int rightChildIndex(int index) {
    return 2 * index + 2;
}
/* Index:  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14
Array:  R   A   B   C   D   E   F  \0  \0  \0  \0  \0  \0   G  \0
Execution Steps:
Root Node (index = 0):

Value at binaryTreeArray[0] = 'R'.
Find Right Child of Root (index = rightChildIndex(0)):

rightChildIndex(0) = 2 * 0 + 2 = 2.
Value at binaryTreeArray[2] = 'B'.
Find Left Child of Right Child (index = leftChildIndex(2)):

leftChildIndex(2) = 2 * 2 + 1 = 5.
Value at binaryTreeArray[5] = 'E'.
Get Data at Left Child of Right Child (data = getData(binaryTreeArray, 5)):

binaryTreeArray[5] = 'E'.
Pointer data points to 'E'.
Print Result:

Data is valid (*data != '\0'), so print:
plaintext
Copy code
root.right.left.data: E */
