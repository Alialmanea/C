//
//  main.c
//  Check Armstrong Number
//
//  Created by dabbaghıe on 28.11.2019.
//  Copyright © 2019 dabbaghıe. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
bool IsArmstrong(int number )
{
    int originalNumber, remainder,n=0, result = 0;
    
    originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += power(remainder, n);
        originalNumber /= 10;
    }
    
    if(result == number)
        return true;
    
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    
    
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    bool t=IsArmstrong(number);
    
    if(t == true)
        printf("%d is an Armstrong number.\n",number);
    else
        printf("%d is not an Armstrong number.\n",number);
    
    
    return 0;
}

