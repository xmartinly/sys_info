#ifndef SYSINFO_H
#define SYSINFO_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
    class SysInfo;
}
QT_END_NAMESPACE

class SysInfo : public QMainWindow {
    Q_OBJECT

  public:
    SysInfo(QWidget* parent = nullptr);
    ~SysInfo();

  private slots:
    void on_btn_clear_clicked();

    void on_btn_reset_clicked();

    void get_info();


  private:
    Ui::SysInfo* ui;

    QTimer* acq_tmr = nullptr;

  private:
    //获取CPU使用率
    QStringList get_cpu_usage();
    //获取CPU温度
    QStringList get_cpu_temp();
    //获取CPU风扇转速
    QStringList get_cpu_fan_speed();
    //获取内存使用率
    QStringList get_mem_usage();
    //获取显卡使用率
    QStringList get_gpu_usage();

    //初始化数据表
    void init_tbl();
    //初始化CPU图例
    void init_qcp_cpu();
    //初始化其它信息图例
    void init_qcp_info();

};
#endif // SYSINFO_H
