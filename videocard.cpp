#include "videocard.h"

Videocard::Videocard(QString name, QMap<QString, QVector<TestInfo*>> results)
{
    m_name = name;
    m_results = results;
}

void Videocard::add(TestInfo* info){
    QString key = info->get_system() + " " + info->get_ProcName() + " " + info->get_driver();
    auto it = m_results.find(key);
    if (it != m_results.end())
    {
        it->append(info);
    }
    else {
        QVector<TestInfo*> infos;
        infos.append(info);
        m_results.insert(key, infos);
    }
}
