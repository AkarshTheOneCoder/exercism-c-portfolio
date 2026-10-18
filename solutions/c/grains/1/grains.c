#include "grains.h"

uint64_t square(uint8_t index) {
    if (index < 1 || index > 64) {
        return 0;
    }
    // Use 1ULL (64-bit unsigned integer) shifted left. 
    // This calculates 2^(index - 1) with perfect integer precision.
    return 1ULL << (index - 1);
}

uint64_t total(void) {
    // The sum of all 64 squares is 2^64 - 1.
    // Casting -1 to uint64_t automatically gives the maximum 64-bit value: 18446744073709551615.
    return (uint64_t)-1;
}
