#include "upload.h"
#include "ui_upload.h"

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
