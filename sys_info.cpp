#include "sys_info.h"
#include "ui_sys_info.h"

SysInfo::SysInfo(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::SysInfo) {
    ui->setupUi(this);
    acq_tmr = new QTimer(this);
    connect(acq_tmr, &QTimer::timeout, this, &SysInfo::get_info);
    acq_tmr->start(1000);
}

SysInfo::~SysInfo() {
    delete ui;
}

void SysInfo::on_btn_clear_clicked() {
    qDebug() << "on_btn_clear_clicked";
}


void SysInfo::on_btn_reset_clicked() {
    qDebug() << "on_btn_reset_clicked";
}

void SysInfo::get_info() {
    qDebug() << "get_info";
}

QStringList SysInfo::get_cpu_usage() {
    QStringList cpu_usage;
    return cpu_usage;
}

QStringList SysInfo::get_cpu_temp() {
    QStringList cpu_temp;
    return cpu_temp;
}

QStringList SysInfo::get_cpu_fan_speed() {
    QStringList cpu_fan_speed;
    return cpu_fan_speed;
}

QStringList SysInfo::get_mem_usage() {
    QStringList mem_usage;
    return mem_usage;
}

QStringList SysInfo::get_gpu_usage() {
    QStringList gpu_usage;
    return gpu_usage;
}

void SysInfo::init_tbl() {
    qDebug() << "init_tbl";
}

void SysInfo::init_qcp_cpu() {
    qDebug() << "init_qcp_cpu";
}

void SysInfo::init_qcp_info() {
    qDebug() << "init_qcp_info";
}

