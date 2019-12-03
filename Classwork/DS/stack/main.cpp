#include"MyStack.h"

int main()
{

MyStack ms;

try{
ms.push(11);
ms.push(22);
ms.push(33);
ms.push(44);
ms.push(55);
ms.push(66);
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
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();
cout<<"\nPopped: "<<ms.pop();
}
catch(runtime_error e)
{
	cout<<"\n"<<e.what()<<endl;
}
return 0;
}
