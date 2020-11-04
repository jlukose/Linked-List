//Linked List part 1 by Joshua Lukose 10/2020
#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main(){
  //first student info
  Student* student = new Student;
  cout << "Enter first name: ";
  cin.get(student->getFirstName(), 20);
  cin.ignore(256, '\n');
  cout << "Enter last name: ";
  cin.get(student->getLastName(), 20);
  cin.ignore(256, '\n');
  cout << "Enter ID: ";
  cin >> *student->getID();
  cin.ignore(256, '\n');
  cout << "Enter GPA: ";
  cin >> *student->getGPA();
  cin.ignore(256, '\n');
  //print first student
  cout << endl << student->getFirstName() << " "
       << student->getLastName() << ", "
       << *student->getID() << ", "
       << *student->getGPA() << endl << endl;

  //second student info
  Student* student2 = new Student;
  cout << "Enter first name: ";
  cin.get(student2->getFirstName(), 20);
  cin.ignore(256, '\n');
  cout << "Enter last name: ";
  cin.get(student2->getLastName(), 20);
  cin.ignore(256, '\n');
  cout << "Enter ID: ";
  cin >> *student2->getID();
  cin.ignore(256, '\n');
  cout << "Enter GPA: ";
  cin >> *student2->getGPA();
  cin.ignore(256, '\n');

  //link first student to second
  Node* firstNode = new Node(student);
  Node* secondNode = new Node(student2);
  firstNode->setNext(secondNode);

  //print first student
  cout << endl << firstNode->getStudent()->getFirstName() << " "
       << firstNode->getStudent()->getLastName() << ", "
       << *firstNode->getStudent()->getID() << ", "
       << *firstNode->getStudent()->getGPA() << endl;

  //print next student
  cout << firstNode->getNext()->getStudent()->getFirstName() << " "
       << firstNode->getNext()->getStudent()->getLastName() << ", "
       << *firstNode->getNext()->getStudent()->getID() << ", "
       << *firstNode->getNext()->getStudent()->getGPA() << endl;

  return 0;
}
