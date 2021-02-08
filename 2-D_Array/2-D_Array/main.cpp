//
//  main.cpp
//  2-D_Array
//
//  Created by sierra on 08/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>
// Greatest common divisor function:
int gcd(int u, int v) {
    int t;
    while (u > 0)
    {
        if (u < v) //switch their places
        {
            t = u; //store u in t
            u = v; //set u to v
            v = t; //set v to t (previously u)
        }
        u = u % v;
    }
    return v;
}

int main(int argc, const char * argv[]) {
    
    int arrLen = 5;
    
    bool myArray[arrLen][arrLen];
    
    // Traverse the 2-D array. If the GCD of a[i][j] is 1, set the boolean to 1. Else, set it to zero.
    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < arrLen; j++)
        {
            
            if ( i > 0 && j > 0)
            {
                int myGcd = gcd(i, j);
                if (myGcd == 1)
                {
                    myArray[i][j] = 1;
                } else {
                    myArray[i][j] = 0;
                }
            }
            
            
            
            std::cout << "i: " << i << " j: " << j << " Bool: " << myArray[i][j] << std::endl;
        }
        std::cout << std::endl;
        
    }
}
