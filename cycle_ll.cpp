#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node* next;
};

Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

void printList(Node* head)
{
	while (head != NULL) {
		cout << head->key << " ";
		head = head->next;
	}
	cout << endl;
}


bool detectLoop(Node* head)
{
	// temp node
	Node* temp = new Node;
	while (head != NULL) {
		if (head->next == NULL)
			return false;
		// Check if next is already pointing to temp
		if (head->next == temp)
			return true;
		// move to next
		Node* next = head->next;
		// Make next point to temp
		head->next = temp;
		// Get to the next node in the list
		head = next;
	}
	return false;
}

int main()
{
	Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(7);
	head->next->next->next = newNode(8);
	head->next->next->next->next = newNode(9);
	
	head->next->next->next->next->next = head->next->next;
	bool found = detectLoop(head);
	if (found)
		cout << "Loop Found";
	else
		cout << "No Loop";
	return 0;
}

