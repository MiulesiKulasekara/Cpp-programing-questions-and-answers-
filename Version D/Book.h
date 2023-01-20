//Class declaration
class Book{

  private :
    
    int bookID;
    char bookName[30];
    char author[30];
  
  public :

    void setBookDetails( int pID , const char pname[] , const char pauthor[] );
    void displayBookDetails();
    void setBookID( int pID );

};
