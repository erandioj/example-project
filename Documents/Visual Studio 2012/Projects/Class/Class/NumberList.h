#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		double value;
		struct ListNode *next;
	};
	ListNode *head; // list head pointer

public:
		// Constructor
	NumberList()
	{
		head = nullptr;
	}

	//Destructor;

	// Linked list operations
	void appendNode(double);
	void instertNode(double);
	void deleteNote(double);
	void displayList() const;
};
#endif


#include <iostream>
#include <iomanip>

#pragma once

using namespace std;


void NumberList::appendNode( double num)
{
	ListNode *newNode; // point to a new node
	ListNode *nodePtr; // to move through the list
	
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	// if there are no nodes in the list
	// make newNode the first node.

	if(!head)
		head = newNode;
	else 
	{
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}
void NumberList::displayList() const
{
	ListNode *nodePtr; 
	nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->value << endl;

		nodePtr = nodePtr->next;
	}
}
