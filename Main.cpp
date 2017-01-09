#include <iostream>
#include "Node.h"

using namespace std;

void addList();
void printList(Node* list);

Node* head = NULL;

int main(){
  addList();
  printList(head);

  addList();
  printList(head);
}

// Add a new node to the linked list
void addList(){
  Student* s = new Student;
  s->createStudent();
  Node* n = new Node(s);

  // add n to the end of linkedlist:
  if (head == NULL) {
    // if the list is empty , then this is the first node
    head =n;
  }
  else // if head is not NULL: the list of not empty
    {
      Node* n2 = head;
      while (n2->getNext() != NULL)
	{
	  n2 = n2->getNext();
	}
      // find n2 which is the last node in the list
      // set n2-> next to point to n
      n2->setNext(n);
      
    }     
}

void printList(Node* list){
  Student* s;
  if (list != NULL)
    {
      s = list->getStudent();
      s->printStudent();

      printList(list->getNext());
      
    }

}



