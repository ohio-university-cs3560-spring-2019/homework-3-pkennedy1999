/** \file */

#include <iostream>
#include <vector>
#include <cmath>

/**
*	\brief This function finds the standard deviation of the data set from an array
* 	\param a Variable for the array of the data set
* 	\param n Variable for the number of values in the array 
* 	\return Returns the standard deviation for the numbers in the array
*/

double deviation( int* a, int n )
{
    int sum = 0; //sum variable set to 0
    
    //for loop that sums up all of the numbers in the array
    for(size_t i = 0; i <= n - 1; i++)
    {
        sum += a[i];
    }
    
    double mean = sum/=(n-1); //mean of the set is the sum divided by the number of values in the set
    double stddev = 0; //standard deviation variable set to 0;
    
    //for loop that gets the value needed to be square rooted for the standard deviation
    for(size_t i = 0; i <= n - 2; i++)
    {
        stddev += (a[i] - mean) * (a[i] - mean);
    }
    
    stddev /= (n-1); //value is divided by number of values in the array
    
    //"standard devation is zero" error message outputted to user
    if(stddev == 0)
    {
        std::cout << "Sigma is zero." << std::endl;
    }
   
    return sqrt(stddev); //function returns the square root of the value to get the standard deviation

}
