#ifndef UPLOAD_H
#define UPLOAD_H

#include <QDialog>

namespace Ui {
class upload;
}

class upload : public QDialog
{
    Q_OBJECT

public:
    explicit upload(QWidget *parent = 0);
    ~upload();

private slots:
    void on_bt_upload_cancel_clicked();

    void on_bt_upload_path_clicked();

private:
    Ui::upload *ui;
};

#endif // UPLOAD_H
