#include "BST.h"

template <class T>
BST<T>::BST():root(nullptr)
{}

template <class T>
BST<T>::~BST()
{
	//Delete(root);
}

template <class T>
void BST<T>::insert(T iData)
{

	TreeNode<T> *t = new TreeNode<T>;
	t->setLeft(nullptr);
	t->setData(iData);
	t->setRight(nullptr);
	
	if(root==nullptr)
	{
		root = t;
	}
	else
	{
	
	TreeNode<T> *current = root;
	
	while(current != nullptr)
	{
		if(current->getData() == iData)
		{
			throw runtime_error("\nDuplicate Data!!");		
		}
		//set left values
		if(iData < current->getData())
		{
			if(current->getLeft() == nullptr)
			{
				current->setLeft(t);
				return;
			}
			else
			{
				current = current->getLeft();
			}
		}
		else
		{
			if(current->getRight() == nullptr)
			{
				current->setRight(t);
				return;
			}
			else
			{
				current = current->getRight();
			}
		}
	}

	}
}

template<class T>
void BST<T>::InOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   InOrder(temp->getLeft());
   	   cout<<temp->getData()<<"\t";
	   InOrder(temp->getRight());
  }
}

template<class T>
void BST<T>::PreOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
  	cout<<temp->getData()<<"\t";
	   PreOrder(temp->getLeft());
	   PreOrder(temp->getRight());
  }
}

template<class T>
void BST<T>::PostOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   PostOrder(temp->getLeft());
	   PostOrder(temp->getRight());
	   cout<<temp->getData()<<"\t";
  }
}

template <class T>
TreeNode<T>* BST<T>::FindMax(TreeNode<T> *t)
{
	if(t == nullptr || t->getRight() == nullptr)
	{
		return t;
	}
	else
	{
		return FindMax(t->getRight());
	}
}

template <class T>
TreeNode<T>* BST<T>::FindMin(TreeNode<T> *t)
{
	if(t == nullptr || t->getLeft() == nullptr)
	{
		return t;
	}
	else
	{
		return FindMin(t->getLeft());
	}
}


template<class T>
bool BST<T>::search(T val)
{
   TreeNode<T> *temp = root;
 
    while (temp != NULL) 
    {
        if (val == temp->getData()) 
	{
            return true;
        } 
	else if (val < temp->getData())
	{
            temp = temp->getLeft();   
        } 
	else
	{
            temp = temp->getRight();
        }
    } 
 
    return false;
}


template<class T>
TreeNode<T>* BST<T>::GetRootNode()
{
	return root;

}

template<class T>
int  BST<T>::HeightOfTree(TreeNode<T>*  temp)
{
	int l = 0;
	int r = 0;
	
	if(temp == NULL)
	{
		return 0;
	}
	
	l = HeightOfTree(temp->getLeft());
	r = HeightOfTree(temp->getRight());
	if( l > r || l == r)
	{
		return (l + 1);
	}
	else
	{
		return (r + 1);
	}

}
