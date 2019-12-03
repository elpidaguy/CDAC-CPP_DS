#include<iostream>
using namespace std;

class MyArray
{
	private:
		int size;
		int *p;
	public:
		MyArray(int s):size(s),p(new int[size])
		{
		}
		
		MyArray(const MyArray &x)
		{
			this->size = x.size;
			this->p = new int[size];
			for(int i = 0; i < size; i++)
			{
				p[i] = x.p[i];
			}

		}

		int& At(int index)
		{
			return p[index];
		}

		/*int  GetAt(int index)
		{
			return p[index];
		}*/
	
		~MyArray()
		{
			delete []p;
		}
};



int main(){

	MyArray a(2);

	a.At(0) = 100;

	cout<<a.At(0);


	/*a.SetAt(0,10);
	a.SetAt(1,20);
	{
	MyArray b = a;
	b.SetAt(1,300);
	}
	cout<<"\n value="<<a.GetAt(1)<<endl;
*/
	return 0;
}
