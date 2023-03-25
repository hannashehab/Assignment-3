#include "Queue.h"
using namespace std;
//All comments are in the .h file
template <class T> 
Queue<T>::Queue()
{
	front = nullptr;
	rear = nullptr;
}

template <class T>
bool Queue<T>::isEmpty()
{
	return front == nullptr;
}

template <class T>
void Queue<T>::push(T value) 
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = nullptr;
	if (front == nullptr && rear == nullptr)
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
template <class T>
void Queue<T>::pop() 
{
	Node* temp = front;
	front = front->next;
	delete temp;
}