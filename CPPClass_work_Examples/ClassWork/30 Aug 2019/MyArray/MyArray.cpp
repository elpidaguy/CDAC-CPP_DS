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
		
		MyArray(const MyArray &x) = delete;
		MyArray  operator=(const MyArray &x) = delete;

/*		MyArray(const MyArray &x)
		{
			this->size = x.size;
			this->p = new int[size];
			for(int i = 0; i < size; i++)
			{
				p[i] = x.p[i];
			}

		}

*/		//int& At(int index)
		int& operator[](int index)
		{
			if( index >=0 && index < size){
				cout<<"\n HI"<<endl;
			return p[index];
			}
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

	MyArray a(2), c(2);

	a[1] = 100;

	cout<<"\n"<<a[1] <<endl;
	
	c = a;
	MyArray b = a;
	return 0;
}
