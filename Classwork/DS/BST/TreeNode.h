#ifndef TN_H
#define TN_H

#include<iostream>
using namespace std;

template <class T>
class TreeNode
{
private:
   T data;
   TreeNode<T> *left;
   TreeNode<T> *right;

public:  
   void setData(T temp);
   T getData();
   void setLeft(TreeNode<T>* temp);
   TreeNode<T>* getLeft();
   void setRight(TreeNode<T>* temp);
   TreeNode<T>* getRight();
};

#endif
