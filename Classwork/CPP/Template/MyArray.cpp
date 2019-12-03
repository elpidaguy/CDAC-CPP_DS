#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
	private:
		int size;
		T *p;
	public:
		MyArray(int p_size):size(p_size), p(new T[size]){};
		
		T& At(int index)
		{
			return p[index];
		}

		~MyArray(){
			delete []p;
		};

};

int main()
{

	MyArray<int> m(2);
	m.At(0) = 100;
	cout<<m.At(0)<<endl;

	MyArray<float> m2(2);
	m2.At(0) = 100.125;
	cout<<m2.At(0)<<endl;

	MyArray<char> m3(2);
	m3.At(0) = 'k';
	cout<<m3.At(0)<<endl;
	
	MyArray<string> m4(2);
	m4.At(0) = "kaustubh";
	cout<<m4.At(0)<<endl;
	
	return 0;
}
