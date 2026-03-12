// Aim : explore use of objects 

#include <iostream>
using namespace std ;



class parent
{
    public : // this  is access specifier , it allows object to access data of that class.
    int data ; 
    
    void get_data(int Data)  // We  didn't write data here becouse
    {    
        data = Data ;  // data = data would throw an Error and ambiguilty                
    }
    
    int put_data()  // declear and define function within the class
    { return data ; }
} ;


int main(int argc, char *argv[])
{
	// Now lets create an object of  the class 
	parent p1 ;
	p1.data = 89 ;  // we can access members via dot operator '.'
    cout << "   " <<	p1.put_data()  << endl  ;
    p1.get_data(98) ; // same as normal functions
    cout << "   " <<	p1.put_data()  << endl  ;
    
    // We can create more than one objects
    parent p2 ;
    p2.data = 34 ;
    cout << "   " <<	p2.put_data()  << endl  ;
    
    return 0 ;
	
	
}