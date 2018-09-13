#include "Stack_inter.h"
//
//typedef double Type;
//class Stack {
//private:
//	Type * stackPtr;
//	int size;
//	int top;
//	bool isEmpty();
//	bool isFull();
//public:
//	Stack(int);
//	~Stack();
//	bool push(Type);
//	bool pop(Type *);
//};
//Stack::Stack(int s) {
//	size = s;
//	top = 0;
//	stackPtr = new Type[size];
//}
//Stack::~Stack() {
//	delete[] stackPtr;
//	cout << "Destructor\n";
//}
//bool Stack::isEmpty() {
//	if (top == 0)
//		return true;
//	else return false;
//}
//bool Stack::isFull() {
//	if (size == top)
//		return true;
//	else return false;
//}
//bool Stack::push(Type num) {
//	if (!isFull()) {
//		stackPtr[top++] = num;
//		cout << num << ' ';
//		return true;
//	}
//	else return false;
//}
//bool Stack::pop(Type *num) {
//	if (!isEmpty()) {
//		*num = stackPtr[--top];
//		cout << *num << ' ';
//		return true;
//	}
//	else return false;
//}
int main() {
	Stack stack5(5);
	Type t = 0;
	Type d;
	while (stack5.push(t+=1.1));
	cout << endl;
	while (stack5.pop(&d));
	cout << endl;
	cout << stack5.pop(&d) << "           0 - empty 1 - full\n";
	Stack stack10(10);
	t = 0;
	while (stack10.push(t += 1.1));
	cout << endl;
	while (stack10.pop(&d));
	cout << endl;
	cout << stack10.pop(&d) << "          0 - empty 1 - full\n";
	return 0;
}