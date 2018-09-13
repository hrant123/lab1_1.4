#pragma once
#include <iostream>
using namespace std;

typedef double Type;
class Stack {
private:
	Type * stackPtr;
	int size;
	int top;
	bool isEmpty();
	bool isFull();
public:
	Stack(int);
	~Stack();
	bool push(Type);
	bool pop(Type *);
};