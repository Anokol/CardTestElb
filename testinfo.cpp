#include "testinfo.h"

TestInfo::TestInfo(QString type, int fps, double frameTime, QString system)
{
    m_type = type; // названия теста текстурирование и тд
    m_fps = fps;
    m_frameTime = frameTime;
    m_system = system; //тип системы
}
