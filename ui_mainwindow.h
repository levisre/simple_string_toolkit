/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_group;
    QWidget *tab_hashing;
    QLabel *lbl_Input;
    QPlainTextEdit *txt_output;
    QPlainTextEdit *txt_Input;
    QComboBox *box_Algo;
    QPushButton *btn_Action;
    QLabel *lbl_algo;
    QLabel *lbl_output;
    QWidget *tab_encoding;
    QPlainTextEdit *txt_einput;
    QLabel *lbl_input;
    QLabel *lbl_method;
    QComboBox *box_method;
    QPlainTextEdit *txt_eoutput;
    QLabel *lbl_output_2;
    QPushButton *btn_proceed;
    QWidget *tab_about;
    QLabel *lbl_img;
    QLabel *lbl_appname;
    QLabel *lbl_license;
    QLabel *lbl_stie;
    QLabel *txt_version;
    QLabel *lbl_ps;
    QLabel *lbl_srcurl;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(538, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_group = new QTabWidget(centralWidget);
        tab_group->setObjectName(QStringLiteral("tab_group"));
        tab_group->setGeometry(QRect(10, 10, 521, 371));
        tab_hashing = new QWidget();
        tab_hashing->setObjectName(QStringLiteral("tab_hashing"));
        lbl_Input = new QLabel(tab_hashing);
        lbl_Input->setObjectName(QStringLiteral("lbl_Input"));
        lbl_Input->setGeometry(QRect(10, 0, 62, 16));
        txt_output = new QPlainTextEdit(tab_hashing);
        txt_output->setObjectName(QStringLiteral("txt_output"));
        txt_output->setGeometry(QRect(10, 200, 501, 81));
        txt_Input = new QPlainTextEdit(tab_hashing);
        txt_Input->setObjectName(QStringLiteral("txt_Input"));
        txt_Input->setGeometry(QRect(10, 20, 501, 81));
        box_Algo = new QComboBox(tab_hashing);
        box_Algo->setObjectName(QStringLiteral("box_Algo"));
        box_Algo->setGeometry(QRect(10, 140, 511, 24));
        btn_Action = new QPushButton(tab_hashing);
        btn_Action->setObjectName(QStringLiteral("btn_Action"));
        btn_Action->setGeometry(QRect(-10, 290, 531, 51));
        lbl_algo = new QLabel(tab_hashing);
        lbl_algo->setObjectName(QStringLiteral("lbl_algo"));
        lbl_algo->setGeometry(QRect(10, 120, 62, 16));
        lbl_output = new QLabel(tab_hashing);
        lbl_output->setObjectName(QStringLiteral("lbl_output"));
        lbl_output->setGeometry(QRect(10, 170, 62, 16));
        tab_group->addTab(tab_hashing, QString());
        tab_encoding = new QWidget();
        tab_encoding->setObjectName(QStringLiteral("tab_encoding"));
        txt_einput = new QPlainTextEdit(tab_encoding);
        txt_einput->setObjectName(QStringLiteral("txt_einput"));
        txt_einput->setGeometry(QRect(10, 30, 501, 81));
        lbl_input = new QLabel(tab_encoding);
        lbl_input->setObjectName(QStringLiteral("lbl_input"));
        lbl_input->setGeometry(QRect(10, 0, 62, 16));
        lbl_method = new QLabel(tab_encoding);
        lbl_method->setObjectName(QStringLiteral("lbl_method"));
        lbl_method->setGeometry(QRect(10, 120, 62, 16));
        box_method = new QComboBox(tab_encoding);
        box_method->setObjectName(QStringLiteral("box_method"));
        box_method->setGeometry(QRect(10, 140, 511, 24));
        txt_eoutput = new QPlainTextEdit(tab_encoding);
        txt_eoutput->setObjectName(QStringLiteral("txt_eoutput"));
        txt_eoutput->setGeometry(QRect(10, 189, 491, 81));
        lbl_output_2 = new QLabel(tab_encoding);
        lbl_output_2->setObjectName(QStringLiteral("lbl_output_2"));
        lbl_output_2->setGeometry(QRect(10, 170, 62, 16));
        btn_proceed = new QPushButton(tab_encoding);
        btn_proceed->setObjectName(QStringLiteral("btn_proceed"));
        btn_proceed->setGeometry(QRect(10, 280, 491, 61));
        tab_group->addTab(tab_encoding, QString());
        tab_about = new QWidget();
        tab_about->setObjectName(QStringLiteral("tab_about"));
        lbl_img = new QLabel(tab_about);
        lbl_img->setObjectName(QStringLiteral("lbl_img"));
        lbl_img->setGeometry(QRect(180, 0, 151, 191));
        lbl_appname = new QLabel(tab_about);
        lbl_appname->setObjectName(QStringLiteral("lbl_appname"));
        lbl_appname->setGeometry(QRect(20, 210, 251, 16));
        lbl_license = new QLabel(tab_about);
        lbl_license->setObjectName(QStringLiteral("lbl_license"));
        lbl_license->setGeometry(QRect(20, 250, 301, 16));
        lbl_stie = new QLabel(tab_about);
        lbl_stie->setObjectName(QStringLiteral("lbl_stie"));
        lbl_stie->setGeometry(QRect(20, 270, 311, 16));
        txt_version = new QLabel(tab_about);
        txt_version->setObjectName(QStringLiteral("txt_version"));
        txt_version->setGeometry(QRect(20, 230, 201, 16));
        lbl_ps = new QLabel(tab_about);
        lbl_ps->setObjectName(QStringLiteral("lbl_ps"));
        lbl_ps->setGeometry(QRect(20, 310, 301, 16));
        lbl_srcurl = new QLabel(tab_about);
        lbl_srcurl->setObjectName(QStringLiteral("lbl_srcurl"));
        lbl_srcurl->setGeometry(QRect(20, 290, 431, 16));
        tab_group->addTab(tab_about, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tab_group->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Simple String Toolkit", 0));
        lbl_Input->setText(QApplication::translate("MainWindow", "Input:", 0));
        box_Algo->clear();
        box_Algo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "MD4", 0)
         << QApplication::translate("MainWindow", "MD5", 0)
         << QApplication::translate("MainWindow", "SHA1", 0)
         << QApplication::translate("MainWindow", "SHA224", 0)
         << QApplication::translate("MainWindow", "SHA256", 0)
         << QApplication::translate("MainWindow", "SHA384", 0)
         << QApplication::translate("MainWindow", "SHA512", 0)
         << QApplication::translate("MainWindow", "SHA3_224", 0)
         << QApplication::translate("MainWindow", "SHA3_256", 0)
         << QApplication::translate("MainWindow", "SHA3_384", 0)
         << QApplication::translate("MainWindow", "SHA3_512", 0)
         << QApplication::translate("MainWindow", "CRC-16", 0)
         << QApplication::translate("MainWindow", "CRC32", 0)
         << QApplication::translate("MainWindow", "ALDER-32", 0)
         << QApplication::translate("MainWindow", "RIPEMD128", 0)
         << QApplication::translate("MainWindow", "RIPEMD160", 0)
         << QApplication::translate("MainWindow", "RIPEMD256", 0)
         << QApplication::translate("MainWindow", "RIPEMD320", 0)
         << QApplication::translate("MainWindow", "Tiger", 0)
         << QApplication::translate("MainWindow", "Whirlpool", 0)
         << QApplication::translate("MainWindow", "MD2", 0)
        );
        btn_Action->setText(QApplication::translate("MainWindow", "CALCULATE HASH!", 0));
        lbl_algo->setText(QApplication::translate("MainWindow", "Algorithm:", 0));
        lbl_output->setText(QApplication::translate("MainWindow", "Result:", 0));
        tab_group->setTabText(tab_group->indexOf(tab_hashing), QApplication::translate("MainWindow", "Hashing", 0));
        lbl_input->setText(QApplication::translate("MainWindow", "Input:", 0));
        lbl_method->setText(QApplication::translate("MainWindow", "Method:", 0));
        box_method->clear();
        box_method->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ASCII to Base64", 0)
         << QApplication::translate("MainWindow", "ASCII from Base64", 0)
         << QApplication::translate("MainWindow", "ASCII to Hexadecimal", 0)
         << QApplication::translate("MainWindow", "ASCII from Hexadecimal", 0)
         << QApplication::translate("MainWindow", "ASCII to Decimal", 0)
         << QApplication::translate("MainWindow", "ASCII from Decimal", 0)
         << QApplication::translate("MainWindow", "ASCII to Binary", 0)
         << QApplication::translate("MainWindow", "ASCII from Binary", 0)
         << QApplication::translate("MainWindow", "Reverse String", 0)
         << QApplication::translate("MainWindow", "ROT13", 0)
         << QApplication::translate("MainWindow", "ASCII to Base32", 0)
         << QApplication::translate("MainWindow", "ASCII from Base32", 0)
        );
        lbl_output_2->setText(QApplication::translate("MainWindow", "Output:", 0));
        btn_proceed->setText(QApplication::translate("MainWindow", "PROCEED", 0));
        tab_group->setTabText(tab_group->indexOf(tab_encoding), QApplication::translate("MainWindow", "Encoding", 0));
        lbl_img->setText(QString());
        lbl_appname->setText(QApplication::translate("MainWindow", "Simple String Toolkit by Levis Nickaster", 0));
        lbl_license->setText(QApplication::translate("MainWindow", "Using Qt Framework 5 under GPLv3 License", 0));
        lbl_stie->setText(QApplication::translate("MainWindow", "<html><head/><body><p>My Personal Blog:<a href=\"http://ltops9.wordpress.com\"> http://ltops9.wordpress.com</a></p></body></html>", 0));
        txt_version->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        lbl_ps->setText(QApplication::translate("MainWindow", "P/s: The image above is my ideal girl, not me :)", 0));
        lbl_srcurl->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Checkout the Source code @:<a href=\"https://github.com/levisre/simple_string_toolkit\">Github Page</a></p></body></html>", 0));
        tab_group->setTabText(tab_group->indexOf(tab_about), QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
