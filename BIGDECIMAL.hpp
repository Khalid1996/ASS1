/*
 *  file BigDecimal.hpp
 *  --------------
 *  This file contain the defintion of the functins & class BigDecimal
 *  --------------------------------------------------------------------
*/


#ifndef _BIGDECIMAL_HPP_
#define _BIGDECIMAL_HPP_
#pragma GCC system_header
#include <iostream>
#include <valarray>
#include <ostream>
#include <string>


using namespace std ;
string strOne , strTwo , strTempTwo , strTempOne ;
int carry = 0 ;
int borrow = 10 ;
// class BigDsecimalInt represent the big number
// It contains private string an valarray
// & constructor , destructor ,
class BigDecimalInt{
    // private section
    int* bigDecimal ;
    int size ;
public :
   // puublic section
    BigDecimalInt();
    BigDecimalInt(string& str , int num);
    BigDecimalInt(const BigDecimalInt& obj);
    friend void reSizeStr(BigDecimalInt& objOne , BigDecimalInt& objTwo);
    ~BigDecimalInt();
    // friend functions
    friend BigDecimalInt operator+ (BigDecimalInt bigOne , BigDecimalInt bigTwo);
    friend BigDecimalInt operator- (BigDecimalInt bigOne , BigDecimalInt bigTwo);
    friend ostream& operator<< (ostream& out , BigDecimalInt result ) ;
};
void error(string message);
long long int arraySum(string str) ;
bool isValid(string str);
int subtract(int numOne , int numTwo);
int sum(int numOne , int numTwo);
BigDecimalInt operator+ (BigDecimalInt bigOne , BigDecimalInt bigTwo);
void reSizeStr(BigDecimalInt& objOne , BigDecimalInt& objTwo);
BigDecimalInt operator+ (BigDecimalInt bigOne , BigDecimalInt bigTwo);
ostream& operator<< (ostream& out, BigDecimalInt result ) ;

#endif




