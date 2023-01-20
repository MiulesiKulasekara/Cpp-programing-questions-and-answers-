//Class declaration
class Vehicle{

   private :

     int vehicleID;
     char vehicleBrand[30];
     char vehicleType[30];
     int vehiclePrice;

  public :

     void setVehicleDetais( int pID , const char pbrand[] , const char ptype[] , int vehiclePrice );
     void displayVehicleDetails();
     void setVehiclePrice( int n ); 
};