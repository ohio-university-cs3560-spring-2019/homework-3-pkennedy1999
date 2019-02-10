#include <iostream>
#include <vector>
#include <cmath>



double deviation( int* a, int n )
{
    int sum = 0; //sum variable set to 0
    
    //for loop that sums up all of the numbers in the array
    for(size_t i = 0; i <= n; i++)
    {
        sum += a[i];
    }
    
    double mean = sum /= n; //mean of the set is the sum divided by the number of values in the set 
    double stddev = 0; //standard deviation variable set to 0;
    
    //for loop that gets the value needed to be square rooted for the standard deviation
    for(size_t i = 0; i <= n - 1; i++)
    {
        stddev += (a[i] - mean) * (a[i] - mean);
    }
    
    stddev /= n; //value is divided by number of values in the array
    
    //"standard devation is zero" error message outputted to user
    if(stddev == 0)
    {
        std::cout << "Sigma is zero." << std::endl;
    }
   
    return sqrt(stddev); //function returns the square root of the value to get the standard deviation
}
