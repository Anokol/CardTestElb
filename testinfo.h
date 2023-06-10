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
    QString m_draiver;
    QString m_ProcName;

public:
    TestInfo(QString type, int fps, double frameTime, QString driver, QString ProcName, QString system); //данные идут в testinfo.cpp

    QString get_driver(){
        return m_draiver;
    }

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
    QString get_ProcName(){
        return m_ProcName;
    }

};

#endif // TESTINFO_H
