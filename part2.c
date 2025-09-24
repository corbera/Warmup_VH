#include "part2.h"
#include <x86intrin.h>
#include <stdio.h>

/*
 * print_cache_access_times
 *
 * Print 10 measurements of the time of CPU taken to access data in the cache
 *
 * Inputs: None
 * Output: None
 */

void print_cache_access_times()
{
    int junk;
    char buffer[64];

    // TODO-2.1: Implement this function

}

/*
 * print_DRAM_access_times
 *
 * Print 10 measurements of the time of CPU taken to access data in DRAM (not in cache)
 *
 * Inputs: None
 * Output: None
 */
void print_DRAM_access_times()
{
    int junk;
    char buffer[64];

    // TODO-2.2: Implement this function

}

/*
 * is_in_cache
 *
 * Determines if a given virtual address is in the CPU cache
 *
 * Inputs: virt_addr - A virtual pointer/address
 * Output: 1 if the address is in cache, 0 otherwise
 *
 */
int is_in_cache(uint64_t virt_addr)
{
    int junk;

    // TODO-2.3: Implement this function

    return 0;
}

/*
 * flush_cache
 *
 * Flush the L1 cache
 *
 * Inputs: None
 * Output: None
 *
 */
void flush_cache()
{
    // TODO-2.4: Implement this function
}