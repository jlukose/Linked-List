#include <iostream>
#include "node.h"
#include "student.h"

using namespace std;

Node::Node(Student* newStudent){
  student = newStudent;
  next = NULL;
}

Node::~Node(){
  delete &student;
  next = NULL;
}

Student* Node::getStudent(){
  return student;
}

void Node::setStudent(Student* addStudent){
  student = addStudent;
}

void Node::setNext(Node* newNode){
  next = newNode;
}

Node* Node::getNext(){
  return next;
}
