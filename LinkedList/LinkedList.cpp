#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList():head(NULL), tail(NULL)
{

}

void LinkedList::createNode(int value)
{
	node *temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void LinkedList::display()
{
	node *temp = new node;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}

void LinkedList::insertBeginning(int value)
{
	node *temp = new node;

	temp->data = value;
	temp->next = head;
	head = temp;
}

void LinkedList::insert(int value, int pos)
{
	node *prev = new node;
	node *cur = new node;
	node *temp = new node;

	cur = head;

	for (int i = 1; i < pos; i++)
	{
		if (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
	}
	temp->data = value;
	prev->next = temp;
	temp->next = cur;
}

void LinkedList::deleteHead()
{
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

void LinkedList::deleteLast()
{
	node *cur = new node;
	node *prev = new node;

	cur = head;

	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}

	tail = prev;
	prev->next = NULL;
	delete cur;
}

void LinkedList::erase(int pos)
{
	node *cur = new node;
	node *prev = new node;
	node *temp = new node;

	cur = head;

	for (int i = 1; i < pos; i++)
	{
		prev = cur;
		cur = cur->next;
	}

	prev->next = cur->next;
}