#include "TableInputDialog.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QApplication>

TableInputDialog::TableInputDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Create Table");
    setStyleSheet(
        "QLabel {"
        "   font-size: 14px;"
        "   color: #ff0f23;"
        "}"
        "QLineEdit {"
        "   font-size: 14px;"
        "   padding: 5px;"
        "   border: 1px solid #ffc0cb;"
        "   border-radius: 4px;"
        "}"
        "QPushButton {"
        "   font-size: 14px;"
        "   padding: 8px 16px;"
        "   background-color: #ffc0cb;"
        "   color: white;"
        "   border: none;"
        "   border-radius: 4px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #ffa8af;"
        "}"
        );

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QHBoxLayout *rowsLayout = new QHBoxLayout;
    QLabel *rowsLabel = new QLabel("Number of rows:", this);
    rowsEdit = new QLineEdit(this);
    rowsEdit->setPlaceholderText("1-100");
    rowsLayout->addWidget(rowsLabel);
    rowsLayout->addWidget(rowsEdit);

    QHBoxLayout *columnsLayout = new QHBoxLayout;
    QLabel *columnsLabel = new QLabel("Number of columns:", this);
    columnsEdit = new QLineEdit(this);
    columnsEdit->setPlaceholderText("1-100");
    columnsLayout->addWidget(columnsLabel);
    columnsLayout->addWidget(columnsEdit);

    QPushButton *okButton = new QPushButton("OK", this);
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);

    mainLayout->addLayout(rowsLayout);
    mainLayout->addLayout(columnsLayout);
    mainLayout->addWidget(okButton);

    setLayout(mainLayout);
}

int TableInputDialog::getRows() const
{
    return rowsEdit->text().toInt();
}

int TableInputDialog::getColumns() const
{
    return columnsEdit->text().toInt();
}
