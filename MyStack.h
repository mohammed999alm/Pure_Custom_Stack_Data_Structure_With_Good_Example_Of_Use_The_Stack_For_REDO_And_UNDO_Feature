#pragma once
#include <iostream>
using namespace std;

template <class T>

class MyStack
{

	T* _arr;
	T* _tempArr;
	int _size = 0;

	class Node 
	{
	public :

		T value;
		Node* next;
		Node* prev;
	};


	
public : 


	

	void push(T value) 
	{
		_tempArr = new T[_size + 1];

		for (int i = 0; i < _size; i++) 
		{
			_tempArr[i] = _arr[i];
		}

		_size++;

		_tempArr[_size - 1] = value;

		delete[] _arr;

		_arr = _tempArr;
	}

	void pop()
	{
		_tempArr = new T[_size - 1];

		for (int i = 0; i < _size - 1; i++)
		{
			_tempArr[i] = _arr[i];
		}

		_size--;

		delete[] _arr;

		_arr = _tempArr;
	}


	int size() 
	{
		return _size;
	}

	bool isEmpty() 
	{
		return _size == 0;
	}

	void clear() 
	{
		while (_size > 0) 
		{
			pop();
		}
	}


	T top() 
	{
		if (!isEmpty())
			return _arr[_size - 1];
	}


	T bottom()
	{
		if (!isEmpty())
			return _arr[0];
	}

	void print(string newline = "\n")
	{
		for (int i = 0; i < _size; i++) 
		{
			cout << _arr[i] << "  ";
		}

		cout << newline;
	}
};

