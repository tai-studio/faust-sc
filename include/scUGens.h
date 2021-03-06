#include <stdint.h>
// #include <bitset>
// #include <string>
// #include <iostream>
// #include <climits>

#pragma once

// #ifndef scugens_h
// #define scugens_h


// uint32_t hash( uint32_t val) {
// 	uint32_t out = val;
//     out += ~(out<<15);
//     out ^=  (out>>10);
//     out +=  (out<<3);
//     out ^=  (out>>6);
//     out += ~(out<<11);
//     out ^=  (out>>16);
//     return out;
// }


// explicite implementation, to be used in functional language
    // out0 = in + not(in<<15);
    // out1 = out0 xor (out0>>10);
    // out2 = out1 + (out1<<3);
    // out3 = out2 xor (out2>>6);
    // out4 = out3 + not(out3<<11);
    // out5 = out4 xor (out4>>16);


int bitHash( int val) {
    uint32_t out = (uint32_t) val;
    out += ~(out<<15);
    out ^=  (out>>10);
    out +=  (out<<3);
    out ^=  (out>>6);
    out += ~(out<<11);
    out ^=  (out>>16);
    return (int32_t) out;
}

float hasher (float val) {
        int32_t z  = *(uint32_t*)&val; // direct cast

        union {
            float f;
            int i;
        } u;
        u.i = 0x40000000 | ((uint32_t)bitHash(z) >> 9); 
        return (u.f - 3.f);
}


int bitSeed (int seed, int param, int lower_limit) {
        uint32_t u_seed = (uint32_t) seed;
        uint32_t u_param = (uint32_t) param;

        u_seed = u_param ^ u_seed;
        if (u_seed < lower_limit) {
            u_seed = u_param;
        }
        return (int) u_seed;
}


int bit_not(int x) {
    return ~x;
}

int bit_leftShift(int a, int b) {
	return (int) ((uint32_t) a << (uint32_t) b);
}

int bit_rightShift(int a, int b) {
	return (int) ((uint32_t) a >> (uint32_t) b);
}

// trand(int s1, int s2, int s3) {
//     s1 = ((s1 & (uint32_t)-2) << 12) ^ (((s1 << 13) ^ s1) >> 19);
//     s2 = ((s2 & (uint32_t)-8) << 4) ^ (((s2 << 2) ^ s2) >> 25);
//     s3 = ((s3 & (uint32_t)-16) << 17) ^ (((s3 << 3) ^ s3) >> 11);

//     return s1 ^ s2 ^ s3;
// }


// #endif