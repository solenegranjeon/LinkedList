


#include <iostream>
#include <cstdlib>
//include "Vector.h"
#include "Node.h"

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	std::cout <<"Hello World !" << std::endl;
	
	//~ Vector v1;
	//~ float x=v1.get_x();
	//~ float y=v1.get_y();
	//~ float norm=v1.get_norm();
	//~ printf("x = %f ; y= %f ; norm = %f \n",x,y,norm);
	//~ 
	//~ Vector v2(3,4);
	//~ x=v2.get_x();
	//~ y=v2.get_y();
	//~ norm=v2.get_norm();
	//~ printf("x = %f ; y= %f ; norm = %f \n",x,y,norm);
	//~ 
	//~ Vector v3(-3,4);
	//~ x=v3.get_x();
	//~ y=v3.get_y();
	//~ norm=v3.get_norm();
	//~ printf("x = %f ; y= %f ; norm = %f \n",x,y,norm);
	//~ 
	//~ v3.Add(v2);
	//~ x=v3.get_x();
	//~ y=v3.get_y();
	//~ norm=v3.get_norm();
	//~ printf("x = %f ; y= %f ; norm = %f \n",x,y,norm);
	//~ 
	//~ v3.Multiply(2);
	//~ x=v3.get_x();
	//~ y=v3.get_y();
	//~ norm=v3.get_norm();
	//~ printf("x = %f ; y= %f ; norm = %f \n",x,y,norm);
	
	Vector v2(3,4);
	Node n(v2);
	
	Vector v3(4,5);
	Node n3(v3);
	
	n.set_next(&n3);
	
	
	
	
	return 0;
}

