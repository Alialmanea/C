//
// 
//  find_mod
//
//  Created by dabbaghıe on 28.11.2019.
//  Copyright © 2019 dabbaghıe. All rights reserved.
//

#include <stdio.h>

double findMod(double a, double b)
{
    // Handling negative values
    if (a < 0)
    a = -a;
    if (b < 0)
    b = -b;
    
    // Finding mod by repeated subtraction
    double mod = a;
    
    while (mod >= b)
    mod = mod - b;
    
    // Sign of result typically depends
    // on sign of a.
    if (a < 0)
    return -mod;
    
    return mod;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double a = -9.7, b = 2.3;
    printf("%f",findMod(a,b));
    return 0;
}
