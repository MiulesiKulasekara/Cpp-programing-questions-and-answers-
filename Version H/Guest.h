//Class declaration

class Guest{

  private :

     int guestID;
     char guestName[30];
     double ratePerDay;
     int numberOfDays;

  public :

     void setGuestDetails( int pID , const char pname[] , double prate , int pdays );
     void displayGuestDetaild();
     double calculateGuestBill();

};