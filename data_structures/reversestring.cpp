/*Given a string, reverse it using stack. For example “Github” should be converted to “buhtiG”.

Following is simple algorithm to reverse a string using stack. 

1) Create an empty stack.
2) One by one push all characters of string to stack.
3) One by one pop all characters from stack and put 
   them back to string.
  
  The code is */
// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;
class Stack
{
	public:
	int top;
	unsigned capacity;
	char* array;
};
Stack* createStack(unsigned capacity)
{
	Stack* stack = new Stack();
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = new char[(stack->capacity * sizeof(char))];
	return stack;
}

int isFull(Stack* stack)
{ return stack->top == stack->capacity - 1; }


int isEmpty(Stack* stack)
{ return stack->top == -1; }

void push(Stack* stack, char item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
}

char pop(Stack* stack)
{
	if (isEmpty(stack))
		return -1;
	return stack->array[stack->top--];
}

void reverse(char str[])
{

	int n = strlen(str);
	Stack* stack = createStack(n);

	int i;
	for (i = 0; i < n; i++)
		push(stack, str[i]);

	for (i = 0; i < n; i++)
		str[i] = pop(stack);
}

int main()
{
	char str[] = "Github";

	reverse(str);
	cout << "Reversed string is " << str;

	return 0;
}


  
