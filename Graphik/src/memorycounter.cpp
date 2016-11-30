#include <cstdlib>
#include <new>
#include "memorycounter.h"

#ifdef DEBUG
unsigned long allocations = 0;
unsigned long deallocations = 0;

const unsigned long Graphik::MemoryCounter::Created() {
    return allocations;
}

const unsigned long Graphik::MemoryCounter::Deleted() {
    return deallocations;
}

const unsigned long Graphik::MemoryCounter::Diff(){
    return allocations - deallocations;
}

const bool Graphik::MemoryCounter::Leaking(){
    return MemoryCounter::Diff() != 0;
}

void* operator new(std::size_t size) throw(std::bad_alloc) {
  ++allocations;
  void *p = malloc(size);
  if(!p) throw std::bad_alloc();
  return p;
}
void* operator new  [](std::size_t size) throw(std::bad_alloc) {
  ++allocations;
  void *p = malloc(size);
  if(!p) throw std::bad_alloc();
  return p;
}
void* operator new  [](std::size_t size, const std::nothrow_t&) throw() {
  ++allocations;
  return malloc(size);
}
void* operator new   (std::size_t size, const std::nothrow_t&) throw() {
  ++allocations;
  return malloc(size);
}


void operator delete(void* ptr) throw() { 
    free(ptr); 
    ++deallocations; 
}
void operator delete (void* ptr, const std::nothrow_t&) throw() { 
    free(ptr); 
    ++deallocations; 
}
void operator delete[](void* ptr) throw() { 
    free(ptr); 
    ++deallocations; 
}
void operator delete[](void* ptr, const std::nothrow_t&) throw() { 
    free(ptr); 
    ++deallocations; 
}
#endif