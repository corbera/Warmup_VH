#ifndef PART2_GUARD
#define PART2_GUARD

#include <inttypes.h>

void print_cache_access_times();
void print_DRAM_access_times();
int is_in_cache(uint64_t virt_addr);
void flush_cache();

#endif  