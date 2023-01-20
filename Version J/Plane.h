//Dlearing class

class Plane 
{
	private :
		
		int planeID ;
		char piolet[30] ;
		char destination[30] ;
		
    public :
    	
    	void setPlaneDetails( int pID , const char pio[] , const char pdestination[] );
    	void displayPlaneDetails();
    	void getPiolet();
};