// Aim : To find 2nd Smallest number with sorting
// with bubble sort .


#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
	// Declearation of array
	const int size = 5 ;	
	int array[size]  ; 
	// To insert elements into array
	cout << "Insert elements into the array ! \n" ;
	for (int i = 0 ; i < size ; i++)
	{
	     cout << " Enter element " <<i << " :    "    ;
	     cin >> array[i] ;
	}
cout <<    " Elements inserted into array successfully\n" ; // '\n' adds new line like <<endl ;

		// To display and show array
		cout << " Here is the array \n [" ; // [ for braces for array elements
	for (int x : array)
	{
	    cout << " "<<x<<" " ;
	}
	cout << "]" ; // closed braces for array
	cout << endl ;
	
	// bubbleSort-start
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
	} // bubble-sort-end
	
	// Showing sorted array !
	cout << " Now sorted arrays looks like this \n [" ;
	for (int x : array)
	{
	    cout << " "<<x<<" " ;
	}
	cout <<"]" ;
	cout << endl ;
	cout << " First smallest num : " << array[0] << endl;
	cout << " Second smallest num is :    " << array[1] << endl ;
	cout << " First Largest number is :     " << array[size-1] << endl ;
	cout << " Second Largest number is :   " << array[size-2] <<endl ;
	
	return 0 ;
	
}
/* self_checking _status 
// changed - status
// two different  things  change in one  file doesn't affect others
*/
