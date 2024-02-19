#include<iostream>
using namespace std;

/*
IMPLEMENTATION OF STACK USING LINKED LIST
*/

template<typename T>

class Node {
public:
	T data;
	Node<T>* next;
	Node(T data) {
		this->data = data;
		next = NULL;
	}
};

template<typename T>
class Stack {
public:
	Node<T>* head = NULL;
	int size;

	Stack() {
		head = NULL;
		size = 0;
	}
	int getSize() {
		return size;
	}
	bool empty() {
		return size == 0;
	}
	void push(T val) {
		Node<T>* N = new Node<T>(val);
		N->next = head;
		head = N;
		size++;
	}
	void pop() {
		if (empty()) return;
		Node<T>* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
		size--;
	}
	T top() {
		return head->data;
	}
};

int main() {
	/*
	Stack<int> stack;
	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);
	*/

	int x = 4, y = 5;
	printf("Hello World %d at %d", x, y);
}