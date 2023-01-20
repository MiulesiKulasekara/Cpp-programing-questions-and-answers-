#include "Book.h"
#include <iostream>
#include <string.h>
using namespace std  ;

int main() {

  //create objects
  Book b1 , b2 , b3 ;
  
  //Set Book Details
  b1.setBookDetails( 1212 , "Jane Eyre" , "Charlotte Bronte");
  b2.setBookDetails( 1234 , "Divergent" , "Veronica Roth");
  b3.setBookDetails( 3456 , "Matilda" , "Roald Dahl");
  
  //Set boook ID
  b1.setBookID(1); 
  b2.setBookID(2); 
  b3.setBookID(3); 
   
   //Display details
   cout << endl ;
   b1.displayBookDetails();
   cout << endl ;
   b2.displayBookDetails();
   cout << endl ;
   b3.displayBookDetails();

   return 0 ;
  
}