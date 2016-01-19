


class List {

	public :
		void PushBack(Vector v);
		void PopBack();
		void Insert(Vector v);
		List();
		List(Vector v);
		Vector get_vector();
		int get_nbElts();
		Vector* get_head();
	protected :
		Vector* head;
		int nbElts;
	private :
	
};

