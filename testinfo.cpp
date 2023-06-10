#include "testinfo.h"

TestInfo::TestInfo(QString type, int fps, double frameTime, QString driver, QString ProcName, QString system)
{
    m_type = type; // названия теста текстурирование и тд
    m_fps = fps;
    m_frameTime = frameTime;
    m_system = system; //тип системы
    m_draiver = driver;
    m_ProcName = ProcName;
}
