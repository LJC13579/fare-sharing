#include "upload.h"
#include "ui_upload.h"
#include<QFileDialog>
#include <QDebug>

upload::upload(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upload)
{
    ui->setupUi(this);
}

upload::~upload()
{
    delete ui;
}

void upload::on_bt_upload_cancel_clicked()
{
    this->close();
}

void upload::on_bt_upload_path_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("选择文件"),"E:/STUDY/SoftwarePractice/Ui_Program/Upload",tr("Image(*.jpg *.xmp *.bmp);;Text(*.txt)"));
    qDebug()<<"filename : "<<fileName;
    ui->text_upload_path->setText(fileName);

}
