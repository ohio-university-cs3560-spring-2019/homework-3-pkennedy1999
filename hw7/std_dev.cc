/*****************************************************************
 Program: std_dev.cc
 
 Author: Payton Kennedy
 Email: pk261416@ohio.edu
 
 Class: cs3560
 
 Date: 3/4/19
 
 *******************************************************************/

#include "std_dev.h"

//standard deviation function calculates standard deviation of the population. NOT the Sample 
double stddev(int n, ...)
{
    double sum = 0; //sum variable set to 0
    double variance = 0; //variance variable set to 0
    
    va_list args; //holds data for va_start and va_end variable
    va_start(args, n); //enables acess to next funtion arguments
    
    //for loop that sums up all of the numbers in the list
    for(size_t i = 0; i < n; i++)
    {
        int a = va_arg(args, int); //variable accesses next function argument in set
        sum += a; //sum is just the numbers of the set added up
    }
    
    va_end(args); //ends traversal of arguments
    va_start(args, n); //starts new traversal of list for arguments
    
    double mean = sum /= n; //mean of set is sum divided by how mnay numbers are in set
    
    //for loop that gets initial variance value
    for(size_t i = 0; i < n; i++)
    {
        int a = va_arg(args, int); //variable accesses next funciton argument in set
        variance += (a - mean) * (a - mean); //variance variable is now the sum of the differences squared
    }
    
    va_end(args); //ends traversal of arguments
    
    variance /= n; //variance has to be divided by the count
    
    //"standard devation is zero" warning message outputted to user if standard deviation happens to equal to 0
    if(variance == 0)
    {
        cout << "Sigma is zero." << endl;
    }
    
    return sqrt(variance); //standard deviation of population is just the square root of the variance which is returned by function
    
}
