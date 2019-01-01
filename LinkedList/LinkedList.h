#pragma once

//Should I make it single or double?
//Create node
//Display linked list
//insert at start
struct node
{
	int data;
	node *next;
};

class LinkedList
{
private:
	node *head, *tail;
public:
	LinkedList();
	void createNode(int value);
	void display();
	void insertBeginning(int value);
	void insert(int value, int pos);
	void deleteHead();
	void deleteLast();
	void erase(int pos);
};