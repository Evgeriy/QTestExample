#include "tests/tests_runner.hpp"
#include <QCoreApplication>

const bool runTest = true;

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    if (runTest) {
        TestsRunner::run();
    }

    return a.exec();
}
