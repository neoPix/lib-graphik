#include "stream/textfile.h"
#include <fstream>

Graphik::TextFile::TextFile() : m_data(nullptr), m_action(Graphik::TEXTFILEACTION::READ) {
}

Graphik::TextFile::TextFile(const std::string &filename, Graphik::TEXTFILEACTION action) {
    this->open(filename, action);
}

Graphik::TextFile::~TextFile(){
    this->m_data;
}

Graphik::TextFile* Graphik::TextFile::open(const std::string &filename, Graphik::TEXTFILEACTION action) {
    if(this->m_data) {
        this->close();
    }
    if(action == Graphik::TEXTFILEACTION::READ) {
        std::ifstream *file = new std::ifstream();
        this->m_data = file;
        file->open(filename.c_str());
    }
    else {
        std::ofstream *file = new std::ofstream();
        this->m_data = file;
        file->open(filename.c_str());
    }
    this->m_action = action;
    return this;
}

Graphik::TextFile* Graphik::TextFile::close() {
    if(this->m_data) {
        if(this->m_action == Graphik::TEXTFILEACTION::READ) {
            std::ifstream* file = static_cast<std::ifstream*>(this->m_data);
            file->close();
            delete file;
        }
        else {
            std::ofstream* file = static_cast<std::ofstream*>(this->m_data);
            file->close();
            delete file;
        }
        this->m_data = nullptr;
    }
    return this;
}

std::string Graphik::TextFile::readLine() {
    if(this->m_data){
        if(this->m_action == Graphik::TEXTFILEACTION::READ) {
            std::ifstream* file = static_cast<std::ifstream*>(this->m_data);
            std::string line;
            getline((*file), line);
            return line;
        }
    }
    return nullptr;
}

Graphik::TextFile* Graphik::TextFile::write(const std::string &string) {
    if(this->m_data){
        if(this->m_action == Graphik::TEXTFILEACTION::WRITE) {
            std::ofstream* file = static_cast<std::ofstream*>(this->m_data);
            file->write(string.c_str(), string.length());
        }
    }
    return this;
}

std::string Graphik::TextFile::readAll(const std::string &string) {
    std::ifstream file;
    file.open(string.c_str());

    std::string output;
    std::string line;

    if(file.is_open())
    {
        while(file.good())
        {
            getline(file, line);
            output.append(line + "\n");
        }
    }

    return output;
}