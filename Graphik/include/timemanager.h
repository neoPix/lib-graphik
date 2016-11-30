#ifndef TIME_MANAGER
#define TIME_MANAGER

namespace Graphik
{
    class TimeManager
    {
    public: 
        TimeManager();
        
        void update();
        
        float renderDuration();
        float fps();
        float now();
        
    private:
        unsigned long m_started;
        unsigned long m_appTime;
        unsigned long m_renderDuration;
    };
}
#endif