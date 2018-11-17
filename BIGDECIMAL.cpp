/*
 *  file BigDecimal.cpp
 *  --------------
 *  This file contain the implementiation of the functins
 *  ------------------------------------------------------
*/

#include <iostream>
#include <ostream>
#include <string>
#include <valarray>
#include "BIGDECIMAL.hpp"


// constructor gives default value to the object
void error(string message){
    cout << message << endl ;
}
BigDecimalInt::BigDecimalInt(){
    bigDecimal = new int [9] ;
    size = 9 ;
    for(int i = 0 ; i < 9 ; i++){
       bigDecimal[i] = i ;
    }
    size = 9 ;
}
BigDecimalInt::BigDecimalInt(string& str , int num = 0){
// getBigDecimal this function gets the string
   int len ;
   if(str.at(0) == '-')
        str.at(0) = '0' ;
    str = "0" + str ;
    size = num = str.length();
    bigDecimal = new int [size] ;
    for(int i = 1 ; i <= size ; i++){
        bigDecimal[i-1] = char(str.at(size-i) - 48 ) ;
    }
}
BigDecimalInt::BigDecimalInt( const BigDecimalInt& obj){
    this-> size = obj.size ;
    this-> bigDecimal = new int [size] ;
    for(int i = 0 ; i < size ; i++){
        bigDecimal[i] = obj.bigDecimal[i] ;
    }
}
int subtract(int numOne , int numTwo){
	int result , reBorow = 0 ;
	if(numOne > numTwo ){
		result = reBorow + numOne - numTwo ;	
	}
	else if(numOne < numTwo){
		result = reBorow + numOne - numTwo ;
		cout << "result " << result << endl ;
	}
	else{
		result = numOne - numTwo ;
	}
	return result ;
}
int sum(int numOne , int numTwo){
   int result = 0 , reainder = 0 , carryStack = 0;
   reainder = 0 ;
   carryStack = carry ;
   if(numOne + numTwo + carryStack  > 9 ){
       result = numOne + numTwo + carryStack ;
       reainder = result / 10 ;
       result = result % 10 ;
   }
   else{
       result = numOne + numTwo + carryStack ;
   }
   carry = reainder ;
   return result ;
}
bool sign(string str){
	// This function check the number if it's negativ or positiv
    if(str[0] == '-'){
        str[0] = 0 ;
        return true ;
    }
    else{
        return false ;
    }
}
long long int arraySum(string str){
	int sum = 0 , len ;
	len = str.length();
	char character ;
	for(int i = 0 ; i < len ; i++){
		character = str[i] ;
		sum = char(character - 48) ;
	}
	return sum ;
}
bool isValid(string str){
	// This function check if the number is valid or not valid
    int length = str.length();
    int count = 0 ;
    char character ;
    for(int i = 0 ; i < length ; i++){
    	character = str.at(i);
        if( (character >= '0' && character <= '9' )||character == '-'){
			count++ ;
            continue ;
        }
        else{
        	return false ;
        	break ;
        }
    }
    if(count == length )
    	return true ;
}
void reSizeStr(BigDecimalInt& objOne , BigDecimalInt& objTwo){
	//This function resize the nunber and equal it with other one
    int lenOne = objOne.size , lenTwo = objTwo.size , length , relenTwo , relenOne ;
    relenTwo = lenTwo , relenOne = lenOne ;
    BigDecimalInt *tempOne = new BigDecimalInt(objOne) , *temptwo = new BigDecimalInt(objTwo)  ;
    BigDecimalInt temp ;
    if(lenOne == lenTwo ){
        objOne = objOne ;
        objTwo = objTwo ;
    }
    else if (lenOne > lenTwo) {
       length = relenOne - relenTwo ;
       temp.bigDecimal = new int [length];
       temp.size = length ;
       for(int i = 0 ; i < length ; i++){
           temp.bigDecimal[i] = 0 ;
       }
       objTwo.bigDecimal = new int [lenOne] ;
       objTwo.size = lenOne ;
       for(int i = 0  ; i < lenOne ; i++){
           if( i < relenTwo  )
                objTwo.bigDecimal[i] = temptwo->bigDecimal[i] ;
           else
                objTwo.bigDecimal[i] = temp.bigDecimal[i-relenTwo] ;
       }
   }
   else{
       length = relenTwo - relenOne ;
       temp.bigDecimal = new int [length] ;
       temp.size = length ;
       for(int i = 0 ; i < length ; i++){
           temp.bigDecimal[i] = 0 ;
       }
       objOne.bigDecimal = new int [lenTwo] ;
       objOne.size = lenTwo ;
       for(int i = 0 ; i < lenTwo ; i++){
           if(i < relenOne)
               objOne.bigDecimal[i] = tempOne-> bigDecimal[i] ;
           else
               objOne.bigDecimal[i] = temp.bigDecimal[i-relenOne] ;
       }
   }
   delete tempOne , temptwo ;
}
BigDecimalInt operator+ (BigDecimalInt bigOne , BigDecimalInt bigTwo){
	//--------------------------------------
//This function add two big number
// take two pametrs
// return a new BigDecimalInt with the sum
    BigDecimalInt result ;
    int numOne = 0 , numTwo = 0 , sumResult = 0 ;
    result.bigDecimal = new int [bigOne.size] ;
    result.size = bigOne.size ;
    if(!sign(strTempTwo)&& !sign(strTempOne)){
        for(int i = 0 ; i < result.size ; i++){
        	result.bigDecimal[i] = 0 ;
        }
        for(int i = 0 ; i < result.size ; i++ ){
            numOne = bigOne.bigDecimal[i];
            numTwo = bigTwo.bigDecimal[i] ;
            sumResult = sum(numOne,numTwo) ;
            result.bigDecimal[i] = sumResult ;
        }
    }
    else if(sign(strTempOne)){
    	long long int numone =  arraySum(strOne) ;
    	long long int numtwo = arraySum(strTwo) ;
    	if(numone > numtwo){
	    	for(int i = 0 ; i < result.size ; i++){
	    		numOne = bigOne.bigDecimal[i];
		        numTwo = bigTwo.bigDecimal[i] ;
		        sumResult = subtract(numOne ,numTwo);
		        result.bigDecimal[i] = sumResult ;
	    	}
    	}
    	else if( numone < numtwo ){
    		for(int i = 0 ; i < result.size ; i++){
	    		numOne = bigOne.bigDecimal[i];
		        numTwo = bigTwo.bigDecimal[i] ;
		        sumResult = subtract(numOne ,numTwo);
		        cout << "sumResult" << sumResult << endl ;
		        result.bigDecimal[i] = sumResult ;
	    	}	
    	}
    	else{
    		
    	}
    	
    }
    else if(sign(strTwo)){
        
    }
    else {
        
    }
    return result ;
}
// -----------------------------------------------------------
ostream& operator<< (ostream& out , BigDecimalInt result ){
	int size = result.size - 1 ;
    for(int i = size ; i >= 0 ; i--){
    	out << result.bigDecimal[i] ;
    }
    return out ;
}
BigDecimalInt::~BigDecimalInt(){
    delete bigDecimal;
}
