#ifndef TABLEINPUTDIALOG_H
#define TABLEINPUTDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class TableInputDialog : public QDialog
{
    Q_OBJECT

public:
    TableInputDialog(QWidget *parent = nullptr);

    int getRows() const;
    int getColumns() const;

private:
    QLineEdit *rowsEdit;
    QLineEdit *columnsEdit;
};

#endif // TABLEINPUTDIALOG_H
