// Check if a Binary Tree is BST
// Given a binary tree with N number of nodes, check if that input tree is BST 
// (Binary Search Tree). If yes, return true, return false otherwise.
// Note: Duplicate elements should be kept in the right subtree.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form.
// The data of the nodes of the tree is separated by space. If any node does not have a 
// left or right child, take -1 in its place. Since -1 is used as an indication whether 
// the left or right nodes exist, therefore, it will not be a part of the data of any node.
// Output format :
// The first and only line of output contains either true or false.
// Constraints :
// Time Limit: 1 second
// Sample Input 1 :
// 3 1 5 -1 2 -1 -1 -1 -1
// Sample Output 1 :
// true
// Sample Input 2 :
// 5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
// Sample Output 2 :
// false

#include <iostream>
#include <queue>
#include<climits>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

//  Check BST 2
class isBstReturn
{
    public:
    bool isBST;
    int minimum;
    int maximum;
};
isBstReturn isBST2(BinaryTreeNode<int> *root)
{
    if(root==NULL){
        isBstReturn output;
        output.isBST=true;
        output.maximum=INT_MIN;
        output.minimum=INT_MAX;
        return output;
    }
    isBstReturn leftoutput=isBST2(root->left);
    isBstReturn rightoutput=isBST2(root->right);

    int minimum=min(root->data,min(leftoutput.minimum,rightoutput.minimum));
    int maximum=max(root->data,max(leftoutput.maximum,rightoutput.maximum));
    bool isBSTFinal=(root->data >leftoutput.maximum ) &&
                    (root->data <=rightoutput.minimum) &&
                    leftoutput.isBST &&
                    rightoutput.isBST;
    isBstReturn output;
    output.minimum=minimum;
    output.maximum=maximum;
    output.isBST=isBSTFinal;                
}
// Time Complextiy -- > 0(N);





BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST(root) ? "true" : "false");
}



