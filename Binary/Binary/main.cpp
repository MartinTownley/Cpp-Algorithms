//
//  main.cpp
//  Binary
//
//  Created by sierra on 06/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <deque>

std::deque<int> binary(int x) {
    
    std::deque<int> binDeq;
    
    //Keep repeating until x / 2 is zero: then we reach the Most Significant Bit (MSB)
    while( x > 0 ) {
        
        int lsb = x % 2; //remainder when div by 2
    
        binDeq.push_front(lsb);
    
        x = x / 2; //div by 2. When this value is zero, we've reached our MSB
    }
    
    
    return binDeq;
}

int binaryInt(int x) {
    
    int bin = 0;
    int i = 1; // this is multiplied by our lsb, and its value is multiplied by 10 each time (moving along the units, tens, hundreds columns etc)
    
    while (x > 0) {
        int lsb = x % 2; // get remainder
        
        bin += lsb * i; // add to our binary value the lsb times the
        
        i = i * 10; // i multiplies by 10, corresponding to unit, tens, hundreds... colums
        
        x = x / 2; // divide x by 2 before performing the operations again (stops when x becomes zero)
        
    }
    return bin;
    
}

int main(int argc, const char * argv[]) {
    
    int input;
    
    
    while(true) {
        std::cout << "Enter decimal value:" << std::endl;
        std::cin >> input;
        //std::deque<int> myBin = binary(input);
        std::cout << "Binary value: " << binaryInt(input) << std::endl;
            }
        
    
    return 0;
}
