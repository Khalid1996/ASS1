// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Program: CS213-2018-A1-T1-P1(CASE)
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly / Khalid Mohammed Omar - Abdulilah Adam Abdi / Ahmad Samow Mohammed
// Date:    1 September 2018
// Version: 3.0

#include <iostream>
#include <iomanip>
#include <cassert>
#include "header.hpp"

matrix::matrix(){
   row = col = 4 ;
   data = new int[row*col];
   for(int i = 0 ; i < row; i++){
       for(int j = 0 ; j < col; j++)
       {
           data[i*col+j] = 1 ;
       }
	   
   }
}

matrix::matrix(int ROW , int COL , int array[]){
    row = ROW , col = COL ;
    data = new int[row*col];
    for(int i = 0 ; i <  row ; i++){
        for(int j = 0 ; j < col ; j++)
	        data[i*col+j] = array[i*col+j] ;
    }
    
    
}

matrix::~matrix(){
	
}
ostream& operator<< (ostream& out, matrix mat){
	for(int i = 0 ; i < mat.row ; i++){
		cout << endl ;
		for(int j = 0 ; j < mat.col ; j++){
			out << setw(5) << mat.data[i * mat.col + j] << " " ;
		}
		cout << endl ;
	}
	return out ;
}

istream& operator>> (istream& in, matrix& mat){
	cout << "Enter the number of rows : " ;
	cin >> mat.row ;
	cout << "Enter the number of columns : " ;
	cin >> mat.col ;
	mat.data = new int[mat.row * mat.col];//mat.data.resize(mat.col * mat.row) ;
	cout << "Enter the data : " ;
    for(int i=0 ; i < mat.row * mat.col ; i++){
        in >> mat.data[i] ;
  }
}

matrix operator+  (matrix mat1, matrix mat2){
   matrix mat ;
  assert((mat1.row == mat2.row)&&(mat1.col == mat2.col));
  mat.row = mat1.row ;
  mat.col = mat1.col ;
 mat.data = new int[mat.row*mat.col];// mat.data.resize(mat.col * mat.row) ;
  for(int i = 0 ; i < mat.row ; i++){
  	for(int j = 0 ; j < mat.col ; j++){
  		mat.data[i * mat.col + j] = mat1.data[i * mat.col +j] + mat2.data[i * mat.col +j] ;
  	}
  }
  return mat ;
}

