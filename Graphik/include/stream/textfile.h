#ifndef TEXT_FILE_H
#define TEXT_FILE_H

#include <string>

namespace Graphik {

enum TEXTFILEACTION {
    READ = 0,
    WRITE = 1
};
    
class TextFile
{
    public:
        TextFile();
        TextFile(const std::string &file, TEXTFILEACTION action = READ);
        virtual ~TextFile();
        
        TextFile* open(const std::string &file, TEXTFILEACTION action = READ);
        TextFile* close();
        
        std::string readLine();
        TextFile* write(const std::string &wite);
        
        static std::string readAll(const std::string &file);
    protected:
    private:
        void* m_data;
        TEXTFILEACTION m_action;
};
}

#endif // STATE_H