//Class declaretion

class Medicine {

  private :
     
     int medicineID;
     char medicineName[30];
     char sickness[30];
     double dose;

  public :

    void setMedicineDetails( int pID , const char pmedicineName[] , const char psickness[] , double pdose );
    void displayMedicineDetails();
    void setDose();
};