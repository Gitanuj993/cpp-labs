// Aim : To find out second largest and second smallest element .

// without sorting 
/*
illustration !
2 3 45 6 7 
min = 3 
max = 7 
problem solving ise hi kehte hai
*/
#include <iostream>
//#include <stack>
using namespace std ;

int main(int argc, char *argv[])
{
	const int size = 6 ;
//	stack<int> list[5] ;
	int arr[size] = { 90,3,1,5,6,2 } ;
	int stack[size] ={arr[0]}; // storing in array 
    int stack_size = 0 ;
		// to find minimum number
	int min = arr[0]  ;
	
	for (int i =1 ; i < size ; i++)
	{
	    if ( arr[i] < min)
	  { stack[stack_size] = min ;
	  stack_size++;
	   //   list.push(min) ; // stack implementation failed code 02
	      min = arr[i] ;	      	      
	  }
	    
	}
	
	cout << " Minimum_no is : " <<min<<endl;
	cout << " 2nd Minimum no is : " <<stack[stack_size-1] << endl ;
	
	
	
	return 0 ;
}

// failed to give answer 3 failed test case 01
// test case 2 failed 