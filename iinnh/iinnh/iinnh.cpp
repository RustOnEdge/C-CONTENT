#include<iostream>
#include<stack>

/*
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(val);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->getMin();
*/

class Node { // create node class (link-list format)
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class MinStack {
public:
    Node* head; // top of stack NULL <- 5 <- 4 <- 3 <- 2 <- 1, where 1 is head
    int minVal;  // minimum value
    std::stack<int> minVals; // storing minimum values, to keep track of minimum values in O(1) time complexity

    MinStack() {
        head = NULL;
        minVal = INT_MAX; // comparison variable
    }
    void push(int val) {
        Node* N = new Node(val); // create new node
        N->next = head; // new node points towards head (head is NULL at first call)
        head = N; // head is set to new node, thus on first call NULL <- N, where N is the value given and head node
        if (minVal >= val) { // comparing current minimum value to val
            minVal = val; // setting new minimum value
            minVals.push(minVal); // pushing value into minVals stack
        }
    }
    void pop() {
        if (head->data == minVal) { // checking if top of stack is equal to minimum value
            minVals.pop(); // popping top of minVals stack to remove current minimum value
            head = head->next; // stack pops last node / element
            if (!head) { // checking if both stacks are empty (if stack is empty minVals is also empty, also avoids deque error)
                minVal = INT_MAX; // setting minVal to INT_MAX since there is no current minimum value
                return;
            }
            minVal = minVals.top(); // minimum value is set to previous minimum value
        }
        else {
            head = head->next; // pops last node
        }
    }
    int top() {
        return head->data; // returns top of stack (LIFO, Last In First Out, the last element that was pushed is taken out)
    }
    int getMin() {
        return minVal; // returns minimum value inside stack
    }
};

/*
["MinStack","push","push","push","top","pop","getMin","pop","getMin","pop","push","top","getMin","push","top","getMin","pop","getMin"]
[[],[2147483646],[2147483646],[2147483647],[],[],[],[],[],[],[2147483647],[],[],[-2147483648],[],[],[],[]]
*/
int main() {
    MinStack ms;

    ms.push(2147483646); std::cout << "null,";
    ms.push(2147483646); std::cout << " null,";
    ms.push(2147483647); std::cout << " null, ";
    std::cout<<ms.top() << ", ";
    ms.pop(); std::cout << "null, ";
    std::cout<<ms.getMin() << " ";
    ms.pop(); std::cout << "null, ";
    std::cout<<ms.getMin() << " ";
    ms.pop(); std::cout << "null, ";
    ms.push(2147483647); std::cout << "null, ";
    std::cout<<ms.top() << ", ";
    std::cout<<ms.getMin()<< ", ";
    ms.push(-2147483648); std::cout << "null, ";
    std::cout<<ms.top() << ", ";
    std::cout<<ms.getMin() << ", ";
    ms.pop(); std::cout << "null, ";
    std::cout << ms.getMin();
}


