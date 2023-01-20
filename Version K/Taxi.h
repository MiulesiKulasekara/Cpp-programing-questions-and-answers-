//class decleration

class Taxi {
  
  private :

     int taxiID;
     char driver[30];
     double ratePerKM;
     double distanceTravelled;

  public :

    void setTaxiDetails( int pID , const char pdriver[] , double prate , double pdis );
    void displayTaxiDetails();
    double calculateBill();

};