#include "netcontrol.h"

Netcontrol::Netcontrol(QObject* parent)
    : QObject(parent)
{
}

bool Netcontrol::setPort(const int& _value)
{
    bool retValue = false;
    if (_value >= m_minPortValue && _value <= m_maxPortValue) {
        m_port = _value;
        retValue = true;
    }

    return retValue;
}
