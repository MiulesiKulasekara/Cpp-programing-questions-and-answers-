#include "Book.h"
#include <iostream>
#include <string.h>
using namespace std ;

//Book class implementation

void Book::setBookDetails(int pID, const char pname[] , const char pauthor[] )
{
   bookID = pID;
   strcpy ( bookName , pname );
   strcpy ( author , pauthor);
}
void Book::displayBookDetails()
{ 
   cout << "Book ID   = " << bookID << endl ;
   cout << "Book Name = " << bookName << endl ;
   cout << "Author    = " << author << endl ;
    
}
void Book::setBookID( int n )
{
   cout << "Enter Book ID " << n << " = " ;
   cin>> bookID ;
}
