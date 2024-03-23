#include "sys_info.h"

#include <QApplication>
#include <QFile>

#ifdef VLD_MODULE
    #include "vld.h"
#endif


int main(int argc, char* argv[]) {
    // QApplication a(argc, argv);
    // SysInfo w;
    // w.show();
    // return a.exec();
#ifdef Q_OS_WIN32
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
#endif
    QApplication a(argc, argv);
    //    CalcTF w;
    //    w.show();
    //    return a.exec();
    QFile qss(":/Resource/Qss/custom.qss");
    qss.open(QFile::ReadOnly);
    if(qss.isOpen()) {
        a.setStyleSheet(qss.readAll());
        qss.close();
    }
    SysInfo w;
    w.show();
    return a.exec();
}
