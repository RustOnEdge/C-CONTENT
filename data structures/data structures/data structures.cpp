#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

class LL {
public:
	Node* head = NULL;
	Node* tail = NULL;

	void push(int data) {
		if (!head) {
			head = new Node(data);
			tail = head;
		} else {
			tail->next = new Node(data);
			tail = tail->next;
		}
	}
	void print() {
		Node* N = head;
		while (N) {
			if (N->next == NULL) {
				std::cout << N->data;
				break;
			}

			std::cout << N->data << " -> ";
			N = N -> next;
		}
	}
};

int main() {
	LL ll;

	/*
	ll.push(3);
	ll.push(4);
	ll.push(-1);
	ll.push(INT_MAX);
	ll.push(INT_MIN);
	*/

	int IO;
	cin >> IO;
	while (IO) {
		ll.push(IO);
		cin >> IO;
	}

	ll.print();
}