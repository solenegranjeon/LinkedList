




class Vector {
  public :
  //~Getters
    float get_x();
    float get_y();
    float get_norm();
    
  //~Methods
    void Add(Vector v);
    void Multiply(float param);
    
  //~Constructors & destructor
    Vector();
    Vector(float x, float y);
    Vector(const Vector& model);
    ~Vector()=default;  
    
  protected :
  //~Params 
    float x;
    float y;
    float norm;
    
  private :
};
