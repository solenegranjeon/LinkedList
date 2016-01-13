# include <stdio.h>
#include <math.h>
#include <cassert>
#include <iostream>
#include <cstdlib>
#include "Vector.h"

//Contructors
//Default
Vector::Vector(){
	x=0;
	y=0;
	norm=0;
}

//Copy
Vector::Vector(const Vector& model){
	this->x=model.x;
	this->y=model.y;
	this->norm=sqrt(x*x+y*y);
}

//Gives the coordinates
Vector::Vector(float x, float y){
	this->x=x;
	this->y=y;
	norm=sqrt(x*x+y*y);
}

//Getters
float Vector::get_x(){
	return x;
}

float Vector::get_y(){
	return y;
}

float Vector::get_norm(){
	return norm;
}

//Methods to modify the vector
//Addition
void Vector::Add(Vector v2){
	this->x=v2.x+this->x;
	this->y=v2.y+this->y;
	this->norm=sqrt(this->x*this->x+this->y*this->y);
}

void Vector::Multiply(float a){
	this->x=a*this->x;
	this->y=a*this->y;
}
