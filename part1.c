#include "part1.h"
#include <stdio.h>
#include <unistd.h>

/*
 * virt_to_phys
 *
 * Determines the physical address mapped to by a given virtual address
 *
 * Inputs: virt_addr - A virtual pointer/address
 * Output: phys_ptr - The physical address corresponding to the virtual pointer
 *                    IMPORTANT: If the virtual pointer is not currently
 *                               present, return 0
 */

uint64_t virt_to_phys(uint64_t virt_addr)
{
    uint64_t phys_addr = 0;
    // TODO-1: Implement this function

    return phys_addr;
}
