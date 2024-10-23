/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Open;
    QAction *Save;
    QAction *Add;
    QAction *Search;
    QAction *Replace;
    QAction *Return;
    QAction *Exit;
    QAction *Clear;
    QAction *actionChangeFont;
    QAction *actionChangeColor;
    QAction *Create;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *backgroundLabel;
    QMenuBar *menubar;
    QMenu *File;
    QMenu *Edit;
    QMenu *FontMenu;
    QMenu *ColorMenu;
    QMenu *menuTables;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 460);
        Open = new QAction(MainWindow);
        Open->setObjectName("Open");
        Save = new QAction(MainWindow);
        Save->setObjectName("Save");
        Add = new QAction(MainWindow);
        Add->setObjectName("Add");
        Search = new QAction(MainWindow);
        Search->setObjectName("Search");
        Replace = new QAction(MainWindow);
        Replace->setObjectName("Replace");
        Return = new QAction(MainWindow);
        Return->setObjectName("Return");
        Exit = new QAction(MainWindow);
        Exit->setObjectName("Exit");
        Clear = new QAction(MainWindow);
        Clear->setObjectName("Clear");
        actionChangeFont = new QAction(MainWindow);
        actionChangeFont->setObjectName("actionChangeFont");
        actionChangeColor = new QAction(MainWindow);
        actionChangeColor->setObjectName("actionChangeColor");
        Create = new QAction(MainWindow);
        Create->setObjectName("Create");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 20, 581, 321));
        backgroundLabel = new QLabel(centralwidget);
        backgroundLabel->setObjectName("backgroundLabel");
        backgroundLabel->setGeometry(QRect(40, 230, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        File = new QMenu(menubar);
        File->setObjectName("File");
        Edit = new QMenu(menubar);
        Edit->setObjectName("Edit");
        FontMenu = new QMenu(menubar);
        FontMenu->setObjectName("FontMenu");
        ColorMenu = new QMenu(menubar);
        ColorMenu->setObjectName("ColorMenu");
        menuTables = new QMenu(menubar);
        menuTables->setObjectName("menuTables");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(File->menuAction());
        menubar->addAction(Edit->menuAction());
        menubar->addAction(FontMenu->menuAction());
        menubar->addAction(ColorMenu->menuAction());
        menubar->addAction(menuTables->menuAction());
        File->addAction(Open);
        File->addAction(Save);
        Edit->addAction(Search);
        Edit->addAction(Replace);
        Edit->addAction(Return);
        Edit->addAction(Clear);
        FontMenu->addAction(actionChangeFont);
        ColorMenu->addAction(actionChangeColor);
        menuTables->addAction(Create);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        Save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Search->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        Replace->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\260", nullptr));
        Return->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\272\320\260", nullptr));
        actionChangeFont->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        actionChangeColor->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        Create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        backgroundLabel->setText(QString());
        File->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        Edit->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        FontMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\250\321\200\320\270\321\204\321\202", nullptr));
        ColorMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        menuTables->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
