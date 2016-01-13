#ifndef VECTOR_H
#define VECTOR_H

class Vector{
	
  protected:
    float x;
    float y;
    float norm;
    
	public:
		//Constructors
		Vector();
		Vector(const Vector& model);
		Vector(float x, float y);
		
		//Getters
		float get_x();
		float get_y();
		float get_norm();
		
		//Methods to modify the vector
		void Add(Vector v2);
		void Multiply(float a);
		
		//Destructor
		~Vector()=default;
		
};

#endif
