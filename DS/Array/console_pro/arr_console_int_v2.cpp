/*
Welcome AT
aim : Array console project array of type int
theory :    Abstract data types refers to the instances and operation  on a data structure.
instances means the elements on which operations to be performed.
operations are the list of operations which canbe performed on instances like create, display, delete, insert , search.

let's do the the same with Array data types'

constraint :    input is not enhanced if user can enter wrong data type lets say alphabets then program would show undefined behaviour 
*/
// library included to use cout and cin functionality
#include <iostream>
// stdio.h is included to use exit(0) : shows no error and exit(1) : shows error in the code
#include <stdio.h> 
// we  are using standard aka std namespace in order to not to use std::   
//std::    used to clarify what are we using from where ( where does it defined )
using namespace std ;

// we are using class to efficiently use the function , we can also use individual functions 
// however we have to pass data_variables each time to make change in the data thus class provided additional security
class lists
{
    private :    
    // declearation of array for the instances  // deacleared as private
    int arr1[100] ;
    
    // size of the array , useful for developer to work with data
    int len_arr1 ;            
    //  we can check or track whether data is available or feeded by the user or not
    bool is_int = false ;
    // from here code is public it means objects outside this class and derived classes of this class can use below code
      public : 
      // constructor of the class , here used to provide message about the class
      lists(void)
      {
          cout << " Welcome to the console project of array !\n" ;
      }
      
      int is_status()
      {
          if ( is_int == true)
          { return 1 ; }           // 1 stands for true value
          // check if nothing is true 
          else { return 0 ; }         // 0 stands for false condition 
      }
      
    // to create   
      void create()
      {
          // variable declearation          
          int size ;
          
          cout << " You are going to create a space to store int values  !\n" ;
          int is_created = is_status() ;
          // if chosen lists already exists then 
           if ( is_created == 1)
          {
               char choice ;
               cout << " --->  Data is already exists ! Do you want to continue [ y/n ] :    " ;
               cin >> choice ;
               //taking decision based on the input
               if ( choice !='y') // if user didn't choose y then workflow continued to the main menu'
               {  cout << " !!!!!! you stopped the process manually !\n" ;
               return ;}
          }          
          // to create int array
          cout <<  " Enter total number of elements --> " ;
          cin >> size ;
          // providing info that data is feeded
         is_int = true ;                    
         // passing size of the array 
         len_arr1 = size ;
         // taking inputs from the user and put into the array !
         for (int  i = 0 ; i < size ; i++)                       
         {
              cout << " Enter elements  " << i+1 << " : " ; cin >> arr1[i] ;
         }
         // feedback for the actions
        cout << " ##### Array inserted successfully int type##### !\n\n"       ;                                                                                                         
 }//create-end
 
 // to display data to the user
 void display()
 {
      // to check whether data exists or not
      bool status = is_status() ;
      if ( status == 1 ) // if data exist then show the data
          {
            if ( len_arr1 == 0 ) 
            {
                cout << " !!! warning : List is empty , unable to print ! \n " ; // edge case what if data exists but no data is provided 
            } 
            cout << " int list is :    [ " ;
            for (int i = 0 ; i < len_arr1 ; i++)   // showing data to user using loop 
                {
                     cout << arr1[i] << " " ; // printing data
                 }    
            cout << "] done !\n" ;
          } // int arr1  type -end                                                
          else { cout << "--> No list exits to display \n" ;} // if status return 0 then no data exists
 }// end - display
 
 // start search
 int search(int val = 0) // default parameter is provided as we are going to reuse this 
 {                                       // function later in delete operation
     if ( is_status() != 1)
     {     cout << " No list exists to search elements ! create list first ! \n " ;
           return -1 ;
     }
     int target = val ; // 
     if ( val == 0)  // run when user explicitely decided to search an element
     {           
     cout << "Enter what you want to search :    " ;
     cin >> target ;
     }
     bool is_found = false ; // declearing is_found  flag to check whether element exists or not
     int i ;
     for (i =0  ; i < len_arr1 ; i++)
     { 
         if ( target == arr1[i]) // it run when any element matches to what user search for
         {
             is_found = true ; // what if element found at more than one index or location
             break ;
         }
     }
     if (is_found) // print element with its index when element exists
     { 
         cout << "Element is found at index "<< i <<" at positons :   "<< i+1 << " !\n" ;
         return i ; // for the delete operation
     }
     else { cout << " Element is not found in the list ! \n" ; return  -1 ; } // returned -1 for the deletete operation          
 }// search  function - end // remark for the developers that search function closed here

  // start insert  functionality
 void insert()
 {
     // insert at end of the list 
      if ( is_status() != 1)
     {     cout << " No list exists to insert new elements ! create list first ! \n " ;
           return ;
     }
     int new_element ; // first decleare variable to store what user want to insert
     cout << "Enter new element to insert at the end of the list :    " ;
     cin >> new_element ; // element taken from the user 
     arr1[len_arr1] = new_element ;
     len_arr1++ ; // as element added length of the array should increases
     cout << " --> New element inserted successfully \n" ;               
 }// end insert
 
 
 //start delete elements at the end and shift the elements back  
 void dele()
 {
     // delete element at the end , at initial index and user decided value 
     // lets check whether list is created or not
         if ( is_status() != 1)
     {     cout << " No list exists to search elements ! create list first ! \n " ;
           return ;
     }
     else if ( len_arr1 == 0)
      {
           cout <<    " Empty array , data underflow , can't delete void \n" ;
           return ; 
      }
     int choice ;
    //lets give the user a menu !
    cout << "choose from the following ! \n"     ;
    cout << " 1. del first element \n 2. del rear element \n 3. Enter element to delete \n 4. withdraw deleting element \n " ;
    cout << "-->  Enter you choice : " ; // taking choice from the user
    cin >> choice ;
    if (choice == 1) // for 1st condition
    {
        display() ; // to display the original list 
        // delete front element
        arr1[0] = 0 ; // performing operations        
        // we want to use the space of deleted element and we want to shift the next elements to the empty space 
        for (int i =0 ; i <    len_arr1 ; i++) // shifting of elements
        {
            arr1[i]  = arr1[i+1] ;
        }
        len_arr1-- ;
        cout << "Element deleted successfully\n" ;                
        cout << " new list is :    "  ; display() ;
    }// choice 1 end
    // start choice 2 
    else if ( choice == 2 )
    {
         display() ;
         len_arr1-- ;
         arr1[len_arr1]   = 0 ;
         cout << "Element delected successfully !!! \n" ;
         cout << " Now list become like that " ;display() ;
    }// choice 2 end
    else if ( choice == 3 )
    {
        display() ;
        int element2del ;
        cout << "Enter element to delete :    " ; 
        cin >> element2del ;
        int found = search(element2del) ;
        if (found == -1)
        {
             cout << " So , unable to delete ! \n"   ;
        }
        // deleteing element at index i
       arr1[found] = 0 ; 
       cout << " concerned element deleted successfully \n" ;
       // now shifting back elements to fill the gap
       for ( int i = found ; i < len_arr1 ; i++)  // we writo same code for shifting , 
       {                                                                // we should try to enforce code reusability
            arr1[i]   = arr1[i+1] ;
       }
       len_arr1-- ;
       cout <<    " new list is " ;
       display() ;
    }
    else
     {
        cout << "You withdraw from the process !!!\n" ;
        return ; 
     }             
 }//end delete elements
 
}; // class end

int main(int argc, char *argv[])
{
    //lets create an object of class array
     lists a1 ;
     int choice ;     // declearing variable to take input from the user
     // Menu for the instances and to perform operstions
     while ( true) //  as program run continuosly 
     {
    cout << " choose from the following ! \n"     ;
    cout << " 1. create \n 2. Display \n 3. Search \n 4. Insert \n 5. Delete \n 6. Exit \n "  ;
    // take choice form the console user !
    cout << "---> Enter your choice :  "    ; 
    cin >> choice ;
    
    // lets take the decisons based on his choice !
    switch(choice)
    {
         case 1 : { a1.create() ; break ; }
         case 2 : { a1.display() ; break ; }             
         case 3 : { a1.search() ; break ; }
         case 4 : {a1.insert() ; break ; }
         case 5 :  { a1.dele() ; break ; }
         case 6 : { cout <<    " See you next time ! " ; exit(0) ; }
         default : {cout << " Enter valid choice !" ;   }
    }
    
     } // while loop -end
    
    return 0 ;	
}

/*
name of class was array 
in standard namespace library array is resrved thus compiler shows us error  , t
solution is to change class name

error :    if user inputs string type then it will become nightmare for the user :
*/


