#include <iostream>
using namespace std ;


int main()
{
    
    int num1 = 5 ; 
    int num2 = 10 ; 
    cout <<"Before Swapping the number." <<endl ;
    cout << "num1 = " << num1 << " , num2  = " << num2 << endl;

    num1 = num1 + num2 ; 
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;

    cout <<"\nAfter Swapping."  <<endl ; 
    cout << "num1 = " <<num1 << ", num2 = " <<num2 << endl ;

    return 0 ;   


}
