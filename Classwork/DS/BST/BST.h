#ifndef BST_H
#define  BST_H

#include<iostream>
#include<stdexcept>
#include"TreeNode.h"
using namespace std;

template <class T>
class BST {

private:
	TreeNode<T> *root;
public:
	BST();
	~BST();
	void insert(T iData);
	static void PostOrder(TreeNode<T>* temp);
	static void PreOrder(TreeNode<T>* temp);
	static void InOrder(TreeNode<T>* temp);
	static TreeNode<T>* FindMin(TreeNode<T>* t);
	static TreeNode<T>* FindMax(TreeNode<T>* t);
	bool search(T val);
	static int HeightOfTree(TreeNode<T>* temp);
	TreeNode<T>* GetRootNode();

};

#endif
