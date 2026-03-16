// Aim : To find 2nd Smallest number with sorting
// with bubble sort .


#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
	const int size = 5 ;	
	int array[size] = { 2,4,3,5,6 } ; 
	
	for (int x : array)
	{
	    cout << " "<<x<<" " ;
	}
	cout << endl ;
	
	// bubbleSort
	for (int i = 0 ; i < size ; i++)
	{
	    for (int j = 0 ; j < size -1 -i ; j++)
	    {
	        if (array[j]>array[j+1])
	        {
	            int temp = array[j] ;
	            array[j] = array[j+1] ;
	            array[j+1] = temp ;
	        }
	    }
	}
	for (int x : array)
	{
	    cout << " "<<x<<" " ;
	}
	cout << endl ;
	cout << " First smallest num : " <<
	
	return 0 ;
	
}
// status  -  not changed ,     s
