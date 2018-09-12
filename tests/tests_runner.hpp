#include "netcontrol/netcontrol_test.h"
#include <QTest>

namespace TestsRunner {
void run()
{
    // Указываем, тесты каких сущностей запускаем
    QTest::qExec(new Netcontrol_Test);
}
}
