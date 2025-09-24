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
    // TODO-1.1: Implement this function

    return phys_addr;
}

/*
 * phys_to_virt
 *
 * Determines the virtual address mapping to a given physical address
 *
 * Inputs: phys_addr - A physical pointer/address
 * Output: virt_addr - The virtual address corresponding to the physical pointer
 *                     If the physical pointer not corresponds to any virtual address, return 0
 *
 */

uint64_t phys_to_virt(uint64_t phys_addr)
{
    // TODO-1.2: Implement this function
    return 0;
}