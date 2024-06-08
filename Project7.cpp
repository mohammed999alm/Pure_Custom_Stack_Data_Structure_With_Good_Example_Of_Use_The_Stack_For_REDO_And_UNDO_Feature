#include <iostream>
#include "MyStack.h"
#include "MyString.h"
using namespace std;


int main()
{
	





	MyString s1;

	cout << "S1 = " << s1.value << endl;

	s1.value = "Mohammed";
	cout << "S1 = " << s1.value << endl;


	s1.value = "Mohammed2";
	cout << "S1 = " << s1.value << endl;

	s1.value = "Mohammed3";
	cout << "S1 = " << s1.value << endl;

	s1.value = "Mohammed4";
	cout << "S1 = " << s1.value << endl;

	s1.value = "Mohammed5";
	cout << "S1 = " << s1.value << endl;

	s1.value = "Mohammed6";
	cout << "S1 = " << s1.value << endl;


	cout << "\n\nUndo\n\n";

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;



	cout << "\n\nredo\n\n";

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;




	cout << "\n\nUndo\n\n";

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;

	s1.undo();
	cout << "S1 = " << s1.value << endl;



	cout << "\n\nredo\n\n";

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;

	s1.redo();
	cout << "S1 = " << s1.value << endl;


	system("pause > 0");

	return 0;

	MyStack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);
	stack.push(60);

	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	stack.pop();
	stack.print("\n\n");

	cout << "Stack Empty ?  :  " << stack.isEmpty() << endl << endl;


	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);
	stack.push(60);

	cout << "Stack Empty ?  :  " << stack.isEmpty() << endl << endl;

	cout << "Stack Top   : " << stack.top();
	cout << "\n\nStack Bottom   : " << stack.bottom() << endl << endl;

	stack.print("\n\n");


	cout << "After Stack.clear() \n\n";
	stack.clear();
	cout << "Stack Empty ?  :  " << stack.isEmpty();

	stack.print("\n\n");


	system("pause > 0");

	return 0;
}

