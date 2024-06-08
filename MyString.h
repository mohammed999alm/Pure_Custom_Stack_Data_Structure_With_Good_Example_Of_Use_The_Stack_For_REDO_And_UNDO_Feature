#pragma once
#include <iostream>
#include "MyStack.h"
using namespace std;


class MyString
{

private :

	MyStack<string> _undo;
	MyStack<string> _redo;

	string _value;

public :


	void setValue(string value)
	{
		_undo.push(_value);

		_value = value;

		_redo.clear();
	}
	

	string  getValue()
	{
		return _value;
	}

	__declspec(property(get = getValue, put = setValue))string value;


	void undo() 
	{
		if (!_undo.isEmpty()) 
		{
			_redo.push(_value);

			_value = _undo.top();

			_undo.pop();
		}
	}


	void redo() 
	{
		if (!_redo.isEmpty()) 
		{
			_undo.push(_value);

			_value = _redo.top();

			_redo.pop();
		}
	}
};

