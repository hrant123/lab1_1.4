#include "Stack_inter.h"
Stack::Stack(int s) {
	size = s;
	top = 0;
	stackPtr = new Type[size];
}
Stack::~Stack() {
	delete[] stackPtr;
	cout << "Destructor\n";
}
bool Stack::isEmpty() {
	if (top == 0)
		return true;
	else return false;
}
bool Stack::isFull() {
	if (size == top)
		return true;
	else return false;
}
bool Stack::push(Type num) {
	if (!isFull()) {
		stackPtr[top++] = num;
		cout << num << ' ';
		return true;
	}
	else return false;
}
bool Stack::pop(Type *num) {
	if (!isEmpty()) {
		*num = stackPtr[--top];
		cout << *num << ' ';
		return true;
	}
	else return false;
}