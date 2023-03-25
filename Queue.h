#pragma once
#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

template <class T> //generic class queue to work with any data type
class Queue
{
private:
	struct Node //a Node of type struct
	{
		T data; //object called data from the class T
		Node* next; //pointer that points at the next node
	};
	Node* front; //pointer that points at the front node
	Node* rear; //pointer that points at the rear node
public:
	Queue(); //default constructor that initializes the front and rear to NULL

	bool isEmpty(); //function to handle any errors

	void push(T value); //push function that pushes a value into the queue

	void pop(); //pop function that pops a value out of the queue
};


#endif 
