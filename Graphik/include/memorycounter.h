#ifdef DEBUG

#ifndef MEMORY_COUNTER
#define MEMORY_COUNTER

namespace Graphik
{
    class MemoryCounter
    {
    public: 
        static const unsigned long Created();
        static const unsigned long Deleted();
        
        static const unsigned long Diff();    
        static const bool Leaking();
    };
}

#endif
#endif