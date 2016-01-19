
#include <stdio.h>
#include <iostream>
#include <math.h>
#include "List.h"


Node::Node(){
	v =nullptr;
	next =nullptr;
}

Node::Node(Vector* vec){
	v=vec;
	next=nullptr;
}
	
Node::Node(const Node& model){
	v=model.v;
	next=model.next;
}

void Node::set_next(Node* n){
	next=n;
}

Node* Node::get_next(){
	return next;
}

Vector* Node::get_vector(){
	return v;
}
