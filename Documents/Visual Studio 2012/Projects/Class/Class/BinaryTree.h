#include <iostream>
using namespace std;

#pragma once

class BinaryTree
{
public:
	BinaryTree();
	void insertNode(int);
	bool searchNode(int);
	void remove(int);

	// recursive inline member functions

	void displayInOrder() const
	{ displayInOrder(root); }

	void displayPreOrder() const
	{ displayPreOrder(root); }

	void displayPostOrder() const
	{ displayPostOrder(root); }

	int displayLeafCount()  const
	{ 
		return displayLeafCount(root);
	}

	
	~BinaryTree();
private:
	struct TreeNode
	{
		int value;
		TreeNode *left;
		TreeNode *right;

	};
	TreeNode *root;


// Private member functions
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(int,TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;
	int displayLeafCount(TreeNode *) const;
};

