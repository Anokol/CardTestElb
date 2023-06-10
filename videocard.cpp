#include "videocard.h"

Videocard::Videocard(QString name, QMap<QString, QVector<TestInfo*>> results)
{
    m_name = name;
    m_results = results;
}

void Videocard::add(TestInfo* info){
    auto it = m_results.find(info->get_system());
    if (it != m_results.end())
    {
        it->append(info);
    }
    else {
        QVector<TestInfo*> infos;
        infos.append(info);
        m_results.insert(info->get_system(), infos);
    }
}
