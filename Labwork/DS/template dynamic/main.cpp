//#include"MyStack.cpp" //Implicit templatized class init
#include"MyStack.h"
int main()
{

MyStack<int> ms(5);
MyStack<char> ms1(5);

try{
ms.push(11);
ms.push(22);
ms.push(33);
ms.push(44);
ms.push(55);
//ms.push(66);

ms1.push('a');
ms1.push('b');
ms1.push('c');
ms1.push('d');
ms1.push('e');
//ms1.push('f');
}
catch(runtime_error e)
{
	cout<<"\n"<<e.what()<<endl;
}

try{
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();

cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
cout<<"\nPopped: "<<ms1.pop();
}
catch(runtime_error e)
{
	cout<<"\n"<<e.what()<<endl;
}
return 0;
}
