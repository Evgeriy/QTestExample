#ifndef NETCONTROL_TEST_H
#define NETCONTROL_TEST_H

#include <QObject>

class Netcontrol_Test : public QObject {
    Q_OBJECT
public:
    explicit Netcontrol_Test(QObject* parent = nullptr);

private slots:
    void setPort_data();
    void setPort();
};

#endif // NETCONTROL_TEST_H
