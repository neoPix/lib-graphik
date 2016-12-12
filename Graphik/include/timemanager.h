#ifndef TIME_MANAGER
#define TIME_MANAGER

namespace Graphik
{
    class TimeManager
    {
    public: 
        TimeManager();
        virtual ~TimeManager();
        
        void update();
        
		const unsigned long frame() {return this-> m_frameNumber;}
        const float renderDuration();
        const float fps();
        const float now();
        
    private:
        unsigned long m_started;
        unsigned long m_appTime;
        unsigned long m_renderDuration;
		unsigned long m_frameNumber;
    };
}
#endif