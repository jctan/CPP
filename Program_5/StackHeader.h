#ifndef Stack_H
#define Stack_H
using namespace std; 

class Stack {
	private: 
		int top;
		int * p;
		int size;

	public: 
		Stack ();
		Stack (int s);
		bool isEmpty();
		void push(int value);
		int pop();
};

#endif
