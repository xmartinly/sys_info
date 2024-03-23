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

void SysInfo::init_tbl() {
    qDebug() << "init_tbl";
}

void SysInfo::init_qcp_cpu() {
    qDebug() << "init_qcp_cpu";
}

void SysInfo::init_qcp_info() {
    qDebug() << "init_qcp_info";
}

