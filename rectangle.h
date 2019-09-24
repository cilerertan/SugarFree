//this is a directive that prevents .h files from being included more than once
#ifndef STACK_H
#define STACK_H

/*
 * notice there are no other includes here because they are not needed.
 * if you did some, like iostream, then they would go here
 */


class Stack {

private:
	
	int* stack;
	int sizeStack;
	int numberFull;
	int output;

public:
		
	Stack(const int size); // constructor
	
	bool push(int value);
	int pop();

	//Exception:
	class stackEmpty {};

	//deconstructor:
	~Stack()
	{
		delete [] stack;
		
	}
	
}; // end of class Stack

#endif //STACK_H
