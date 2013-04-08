//
//  main.c
//  FloatSize
//
//  Created by Adrian Bruce Cunanan on 4/8/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    printf("A float consumes %zu bytes.\n", sizeof(float));
    printf("A short consumes %zu bytes\n", sizeof(short));
    
    int shortBits = sizeof(short) * 8;
    int shortBitsUsable = shortBits - 1;
    
    printf("A short has %d bits, of which %d are usable.\n", shortBits, shortBitsUsable);
    
    float largestShort = pow(2, shortBitsUsable);
    float smallestShort = -1 * largestShort;
    
    printf("The smallest short is %f and the largest short is %f.\n", smallestShort, largestShort);
    
    printf("An unsigned short has %zu bytes.\n", sizeof(unsigned short));
    
    int unsignedShortBits = sizeof(unsigned short) * 8;
    
    float largestUnsignedShort = pow(2, unsignedShortBits);
    
    printf("The largest unsigned short is %f.\n", largestUnsignedShort);
    
    return 0;
}

