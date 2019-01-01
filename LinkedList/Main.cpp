#include "LinkedList.h"
#include <iostream>

using namespace std;


int main()
{
	LinkedList obj;

	obj.createNode(25);
	obj.createNode(50);
	obj.createNode(30);
	obj.createNode(40);

	cout << "---------------Displaying All nodes---------------" << endl;
	obj.display();

	cout << "-----------------Inserting At End-----------------" << endl;
	obj.createNode(55);
	obj.display();

	cout << "----------------Inserting At Start----------------" << endl;
	obj.insertBeginning(45);
	obj.display();

	cout << "-------------Inserting At Particular--------------" << endl;
	obj.insert(65, 5);
	obj.display();

	cout << "----------------Deleting At Start-----------------" << endl;
	obj.deleteHead();
	obj.display();

	cout << "-----------------Deleing At End-------------------" << endl;
	obj.deleteLast();
	obj.display();

	cout << "--------------Deleting At Particular--------------" << endl;
	obj.erase(4);
	obj.display();

	system("pause");
	return 0;
}