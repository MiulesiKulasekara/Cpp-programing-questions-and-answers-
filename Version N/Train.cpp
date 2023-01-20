#include "Train.h"
#include <iostream>
#include <string.h>
using namespace std;

//Methods implementation

void Train::setTrainDetails( int pID , int pcapacity , const char ptime[] , const char pdestination[] )
{
   trainID = pID ;
   capacity = pcapacity ;
   strcpy ( startTime , ptime );
   strcpy ( destination , pdestination );
  
}
void Train::displayTrainDetails()
{ 
    cout << "TrainID      =  " << trainID <<  endl ;
    cout << "Capacity     =  " << capacity <<  endl ;
    cout << "Start Time   =  " << startTime<<  endl ;
    cout << "destination  =  " << destination <<  endl ;

}
void Train::setStarttime(  )
{
    cout << "Input new strat time of train " << trainID << " : " ;
    cin >> startTime ;
}

