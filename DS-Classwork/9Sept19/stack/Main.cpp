#include "Stack.h"


int main()
{
	Stack<int> st(6);
	Stack<char> st1(5);
	try{
	st.push(11);
	st.push(22);
	st.push(33);
	st.push(44);
	st.push(55);
	st.push(66);
	st1.push('A');
	}
	catch( runtime_error e){
		cout<<"\n"<<e.what();
	}
	
	try
	{
		cout<<"\n popped ele="<<st.pop();
		cout<<"\n popped ele="<<st.pop();
		cout<<"\n popped ele="<<st.pop();
		cout<<"\n popped ele="<<st.pop();
		cout<<"\n popped ele="<<st.pop();
		cout<<"\n popped ele="<<st1.pop();
		cout<<"\n popped ele="<<st1.pop();
	}
	catch( runtime_error e){

		cout<<"\n"<<e.what();
	}
	return 0;
}

