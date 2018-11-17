/*
 *  file main.cpp
 *  --------------
 *  This file contain the implementiation of the program
 *  ----------------------------------------------------
*/

#include <iostream>
#include <ostream>
#include <string>
#include <valarray>
#include "BIGDECIMAL.cpp"

using namespace std ;

int main(){
	int VALUE = 1 ;
	while(VALUE != 0){
		bool isvalidOne , isvalidTwo ;
		cout << "Enter big decimal the number :\n " ;
	    cin >> strOne ;
	    cout << "Enter big decimal the number :\n " ;
	    cin >> strTwo ;
	    strTempTwo = strTwo , strTempOne = strOne ;
		cout << endl ;
	    cout << endl  ;
	    
	    if(isValid(strOne)&&isValid(strTwo)) {
	    	BigDecimalInt bigOne(strOne), bigTwo(strTwo) ;
	    	reSizeStr(bigOne,bigTwo);
		    cout<< (bigOne+bigTwo) << endl << endl ;
	    }
	    else{
	    	cout << "The numder is not valid" << endl << endl ; 
	    }
	    cout << "Enter 0 to exit and 1 to continue " << endl << endl ;
	    cout << "Enter number : " ;
	    cin >> VALUE ;
	}
	
    
     
    return 0 ;
}
