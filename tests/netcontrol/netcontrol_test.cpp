#include "netcontrol_test.h"
#include "common/network/netcontrol.h"
#include <QTest>

Netcontrol_Test::Netcontrol_Test(QObject* parent)
    : QObject(parent)
{
}

void Netcontrol_Test::setPort_data()
{
    QTest::addColumn<int>("port");
    QTest::addColumn<bool>("retValue");

    QTest::newRow("Меньше минимального допустимого значения") << -1 << false;
    QTest::newRow("Больше максимального допустимого значения") << 10000 << false;
    QTest::newRow("Равно минимальному допустимому значению") << 0 << true;
    QTest::newRow("Равно максимальному допустимому значению") << 9999 << true;
    QTest::newRow("В области допустимых значений") << 55 << true;
}

void Netcontrol_Test::setPort()
{
    Netcontrol netControl;

    //    // Ручной набор тестов
    //    QCOMPARE(netControl.setPort(-1), false);
    //    QCOMPARE(netControl.setPort(10000), false);
    //    QCOMPARE(netControl.setPort(0), true);
    //    QCOMPARE(netControl.setPort(9999), true);
    //    QCOMPARE(netControl.setPort(55), true);

    // Табличный набор тестов
    QFETCH(int, port);
    QFETCH(bool, retValue);
    QCOMPARE(netControl.setPort(port), retValue);
}
