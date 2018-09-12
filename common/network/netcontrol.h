#ifndef NETCONTROL_H
#define NETCONTROL_H

#include <QObject>

class Netcontrol : public QObject {
    Q_OBJECT
public:
    explicit Netcontrol(QObject* parent = nullptr);

public slots:
    bool setPort(const int& _value);

private:
    int m_port{ 0 };
    int m_minPortValue{ 0 };
    int m_maxPortValue{ 9999 };
};

#endif // NETCONTROL_H
