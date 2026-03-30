/*
Welcome AT
aim : Array console project array of type int
theory :    Abstract data types refers to the instances and operation  on a data structure.
instances means the elements on which operations to be performed.
operations are the list of operations which canbe performed on instances like create, display, delete, insert , search.

let's do the the same with Array data types'
*/
#include <iostream>
#include <stdio.h>
using namespace std ;

class lists
{
    private :    
    // declearation of array for the instances 
    int arr1[100] ;
    
    // size neede by the users
    int len_arr1 ;            
    // lests check for on what user wants to work on ?
    bool is_int = false ;
      public : 
      lists(void)
      {
          cout << " Welcome to the console project of array !\n" ;
      }
      
      int is_status()
      {
          if ( is_int == true)
          { return 1 ; }          
          // check if nothing is true 
          else { return 0 ; }          
      }
      
    // to create   
      void create()
      {
          // variable declearation          
          int size ;
          
          cout << " you optioned for the creation of int type  array !\n" ;
          int is_created = is_status() ;
          // if chosen lists already exists then 
           if ( is_created == 1)
          {
               char choice ;
               cout << " --->  list is already exists ! Do you want to continue ( y/n ) :    " ;
               cin >> choice ;
               //taking decision based on the input
               if ( choice !='y')
               {  return ;}
          }          
          // to create int array
          cout <<  " Enter what numbers of elements you want to create :    " ;
          cin >> size ;
          is_int = true ;                    
         len_arr1 = size ;
         for (int  i = 0 ; i < size ; i++)                       
         {
              cout << " Enter elements  " << i+1 << " : " ; cin >> arr1[i] ;
         }
        cout << " ##### Array inserted successfully int type##### !\n\n"       ;                                                                                                         
 }//create-end
 
 void display()
 {
      bool status = is_status() ;
      if ( status == 1 )
          {
            cout << " int list is :    [ " ;
            for (int i = 0 ; i < len_arr1 ; i++)                       
                {
                     cout << arr1[i] << " " ;
                 }    
            cout << "] done !\n" ;
          } // int arr1  type -end                                                
          else { cout << "--> No list exits to display \n" ;}
 }// end - display
 // start search
 int search(int val = 0)
 {
     if ( is_status() != 1)
     {     cout << " No list exists to search elements ! create list first ! \n " ;
           return -1 ;
     }
     int target = val ;
     if ( val == 0)
     {           
     cout << "Enter what you want to search :    " ;
     cin >> target ;
     }
     bool is_found = false ;
     int i ;
     for (i =0  ; i < len_arr1 ; i++)
     { 
         if ( target == arr1[i])
         {
             is_found = true ;
             break ;
         }
     }
     if (is_found)
     { 
         cout << "Element is found at index "<< i <<" at positons :   "<< i+1 << " !\n" ;
         return i ;
     }
     else { cout << " Element is not found in the list ! \n" ; return  -1 ; }
     
     
 }// search - end
 // start insert 
 void insert()
 {
     // insert at end of the list 
      if ( is_status() != 1)
     {     cout << " No list exists to insert new elements ! create list first ! \n " ;
           return ;
     }
     int new_element ;
     cout << "Enter new element to insert at the end of the list :    " ;
     cin >> new_element ;
     arr1[len_arr1] = new_element ;
     len_arr1++ ;
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
     int choice ;
//     while (true)
  //   { // while loop discontinued for a while
    //lets give the user a menu !
    cout << "choose form the following ! \n"     ;
    cout << " 1. del first element \n 2. del rear element \n 3. Enter element to delete \n 4. withdraw deleting element \n " ;
    cout << "-->  Enter you choice : " ;
    cin >> choice ;
    if (choice == 1)
    {
        // delete front element
        arr1[0] = 0 ;
        // we want to use the space of deleted element and we want to shift the next elements to the empty space 
        for (int i =0 ; i <    len_arr1 ; i++)
        {
            arr1[i]  = arr1[i+1] ;
        }
        len_arr1-- ;
        cout << "Element deleted successfully\n" ;                
    }// choice 1 end
    // start choice 2 
    else if ( choice == 2 )
    {
         len_arr1-- ;
         arr1[len_arr1]   = 0 ;
         cout << "Element delected successfully by method 2 \n" ;
    }// choice 2 end
    else if ( choice == 3 )
    {
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
       for ( int i = found ; i < len_arr1 ; i++)
       {
            arr1[i]   = arr1[i+1] ;
       }
       len_arr1-- ;
    }
    else {
        cout << "You withdraw from deleting element\n" ;
        return ; }
    
     

//}// while-end     
     
 }//end delete elements
 
};

int main(int argc, char *argv[])
{
    //lets create an object of class array
    //array a ;
    int choice ;    
     lists a1 ;
     // Menu for the instances and to perform operstions
     while ( true)
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


