#ifndef PART1_GUARD
#define PART1_GUARD

#include <inttypes.h>

uint64_t virt_to_phys(uint64_t virt_addr);
uint64_t phys_to_virt(uint64_t phys_addr);

#endif