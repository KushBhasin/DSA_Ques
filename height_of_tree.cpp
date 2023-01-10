#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

int maxDepth(node* node)
{
	if (node == NULL)
		return 0;
	else {

		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}

int balanced(node * root){
    if(root==NULL){
        return 1;
    }
    int lh,rh;
    lh=maxDepth(root->left);
    rh=maxDepth(root->right);
    if(abs(lh-rh)<=1 && balanced(root->left) && balanced(root->right)){
        return 1;
    }
    return 0;

}

int checkNonLeaf(node * root){
    if(root==NULL || (root->left==NULL && root->right == NULL)){
        return 0;
    }
    
    return 1+ checkNonLeaf(root->left) + checkNonLeaf(root->right);
}
int checkLeaf(node * root){
    if(root== NULL){
        return 0;
    }
    if(root->left==NULL && root->right ==NULL){
        return 1;
    }
    return checkLeaf(root->left)+checkLeaf(root->right);
}
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

int main()
{
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

    //                  1
    //                 /  \
    //                2    3
    //               /  \   
    //              4    5

	cout << "Height of binary tree:" << maxDepth(root)<<endl;
    if(balanced(root)){
        cout<<"Tree is balanced!"<<endl;
    }
    else{
        cout<<"Not Balanced!"<<endl;
    }
    cout<<"Count of leaf nodes is: "<<checkLeaf(root)<<endl;
    cout<<"Count of non leaf nodes is: "<<checkNonLeaf(root)<<endl;
	return 0;
}
