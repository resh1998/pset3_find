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

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    int k = 0;
    for(int j = 0; j < n; j++)
    {
        int min = values[j];
        for(int i = k+1; i < n; i++)
        {
            if(min > values[i])
            {
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        
        }
        
        k++;
            
    }
    return;
}


