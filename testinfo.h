#ifndef TESTINFO_H
#define TESTINFO_H
#include "typeTest.h"
#include <QString>

class TestInfo
{
private:
    QString m_type;
    int m_fps;
    double m_frameTime;
    QString m_system;
    int m_id;

public:
    TestInfo(QString type, int fps, double frameTime, QString system);

    QString get_type(){
        return m_type;
    }

    int get_fps(){
        return m_fps;
    }

    double get_frameTime(){
        return m_frameTime;
    }

    QString get_system(){
        return m_system;
    }

    void set_id(int id){
        m_id = id;
    }
    int get_id(){
        return m_id;
    }
};

#endif // TESTINFO_H
