/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int start = 0;
    int end = n-1;
            
    if(n<=0)
    {
        return false;
    }
    if(n>0)
    {
        while(start <= end )
        {
            int mid = (start + end)/2;
                
            if(value>values[mid])
            {
                start = mid + 1;
                    
            }
            else if(value<values[mid])
            {
                end = mid - 1;
                    
                        
            }
            else if(value==values[mid])
            {
                return true;
            }
                    
        } 
    }
    return false;
}

