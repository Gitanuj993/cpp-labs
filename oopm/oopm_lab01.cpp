// Aim :  lab 01 Objects and classes
// Explain : In this lab we will discuss about classes and objects 

/*
    Let's start with classes , 
    classes are the bluprint on which object of the classes can perform thier work,
    classes are the extended version of structures
        
    Objects are the classes which the instances of the blueprint .
    objects are used to access  data members and to use member functions of the class.
    
    Let's have a look at their Implimentation !'
*/
// let's begin with a header file which allows us to use std::cout and std::cin etc.'
#include <iostream>
// using standard namespace 
using namespace std ; // every code statement is closed by semi-colon ';'
// except header file  , Access speicifier , fuctions ,loops{ except do-while } etc.

class Class   // class is created using 'class' keyword then <name of the class >
{ 
// This is the access modifiers - it can be learned in next classes 
// just have a look , they simply decide who can access what ? from the class
    private : 
    // Members  can only be used within class
    protected :
    // members access by other classes
    public : 
    // Memberes can also be used and access by others 
    
    int data = 1500;
    void getData(int Data)
    { data = Data ; }
    void putData() 
    { cout <<    " Data is :    " <<    data << endl ; }
    
    
} ; // end of the class , Always close class like structures 'struct' in the c and cpp lang.
    
    
//     
class A
{ } ;     
// We can also create an empty class , 
// empty class mean no data and function in the class

int main()
{
	// Now have a look at how objects createad , 	
	Class object1 ;
	// we can create object via classname followed by objectName ! thats it 
	A a ;
	
	// using a function via object or simply accessing a function via object 
	object1.putData() ;
	return 0 ;
}
