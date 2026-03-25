// Aim :    To find smallest  and second smallest number from the array
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
	int size = 2 ; 	
cout << "Enter size of the array : " ;  
cin >> size ;
	
	// array decleared
	int arr[size] ;
	
	cout << "    Now enter elements into the array \n" ;
	
	for ( int i =0 ; i < size ; i++)
	{
	     cout << " Enter element :    "    ; cin >> arr[i] ; // error : arr[size]
	 }	
	 cout << "Elements inserted successfully\n" ;
	 
	 // to find the smallest element and second smallest element without using sorting method
	int min = arr[0] ;	 
	 int min2 = 0 ; 
	 
	 for ( int x : arr)
	 {
	      if ( x <= min)   
	      {
	          min2 =  min ; 
	          min= x ;
	      }
	      else if ( x > min && x < min2)
	      { min2 = x ; }	      	     
	 }
	 
	
cout << "Smallest number is :"  << min <<endl; 
cout << " Second smallest number is : " << min2 ;
	 return 0 ;
}