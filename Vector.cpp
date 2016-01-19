

#include <stdio.h>
#include <iostream>
#include <math.h>
#include "Vector.h"

Vector::Vector(){
	x=0;
	y=0;
	norm=0;
}

Vector::Vector(const Vector& model){
	x=model.x;
	y=model.y;
	norm=pow(pow(x,2)+pow(y,2),0.5);
}

Vector::Vector(float x,float y){
	this->x = x;
	this->y = y;
	norm=pow(pow(x,2)+pow(y,2),0.5);
}



float Vector::get_x(){
	return x;
}

float Vector::get_y(){
	return y;
}

float Vector::get_norm(){
	return norm;
}
	
void Vector::Add(Vector v){
	x=v.x+x;
	y=v.y+y;
	norm=pow(pow(x,2)+pow(y,2),0.5);
}

void Vector::Multiply(float k){
	x=x*k;
	y=y*k;
	norm=norm*k;
}


