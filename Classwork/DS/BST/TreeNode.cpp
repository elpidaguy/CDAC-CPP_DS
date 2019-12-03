#include "TreeNode.h"
template <class T>
   void TreeNode<T>::setData(T temp)
   {
   	data = temp;
   };
   
   template <class T>
   T TreeNode<T>::getData()
   {
   	return data;
   };
   
   template <class T>
   void TreeNode<T>::setLeft(TreeNode<T>* temp)
   {
   	left = temp;
   };
   
   template <class T>
   TreeNode<T>* TreeNode<T>::getLeft()
   {
   	return left;
   };
   
   template <class T>
   void TreeNode<T>::setRight(TreeNode<T>* temp)
   {
   	right = temp;
   };
   
   template <class T>
   TreeNode<T>* TreeNode<T>::getRight(){
   	return right;
   };
