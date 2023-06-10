#ifndef VIDEOCARD_H
#define VIDEOCARD_H
#include<QString>
#include <QMap>
#include <QVector>
#include "testinfo.h"


class Videocard
{
private:
    QString m_name;
    int m_id;
    QMap<QString, QVector<TestInfo*>> m_results;
public:
    Videocard(QString name, QMap<QString, QVector<TestInfo*>> results);
    Videocard(QString name) : m_name(name){}

    QString get_name(){
        return m_name;
    }

    QMap<QString, QVector<TestInfo*>> get_results(){
        return m_results;
    }

    void set_id(int id){
        m_id = id;
    }
    int get_id(){
        return m_id;
    }

    void add(TestInfo* info);
};

#endif // VIDEOCARD_H
