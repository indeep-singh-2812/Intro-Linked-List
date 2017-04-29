// Example program to illustrate introduction to linked list. 
//In this program we will be only creating LinkedList using struct i.e. we will only code to structure a linked list.
//Please note -> Code to insert and delete from a linked list is demonstrated in other repositories. Please check those. 

//Author - Indeep Singh
//Date - 29-4-2017

#include <iostream>
#include <string>

using namespace std;

//Below mentioned line of code creates a node type structure which can hold integer value as data and also has a pointer to another node type structure.
struct Node{
	int data;
	Node* next;
};


int main()
{
	cout<<"In this program, we only created structure of a Linked List. ";
	return 0;
	
}


