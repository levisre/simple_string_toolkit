#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCryptographicHash>
#include <QtCrypto/QtCrypto>

//Version String
QString Version = "0.1 beta";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setup windows style
    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
    this->setFixedSize(this->size());
    //load image to about box
    QPixmap aboutImage(":/M_new.jpg");
    ui->lbl_img->setPixmap(aboutImage);
    //set Versifon in fabout box
    ui->txt_version->setText("Version: " + Version);
}

MainWindow::~MainWindow()
{

    delete ui;
}

//Code for Calculate hash button in Hashing tab
void MainWindow::on_btn_Action_clicked()
{
    QCryptographicHash objHash((QCryptographicHash::Algorithm)ui->box_Algo->currentIndex());
    objHash.addData(ui->txt_Input->toPlainText().toLatin1());
    ui->txt_output->clear();
    ui->txt_output->appendHtml(objHash.result().toHex().toUpper());
}

//Convert to Base64
QString to_Base64(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    return tmp.toBase64();
}

//Convert from base64
QString from_Base64(QString input)
{
    QString result;
    try
    {
       QByteArray tmp;
       tmp.append(input);
       result= QByteArray::fromBase64(tmp);
    }
    catch(std::exception &e)
    {
        result= "";
    }
    return result;
}

//Convert to Hexadecimal
QString to_Hex(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    return tmp.toHex();
}

//Convert form Hexadecimal
QString from_Hex(QString input)
{
    QString result;
    try
    {
        QByteArray tmp;
        tmp.append(input);
        result= QByteArray::fromHex(tmp);
    }
    catch(std::exception &e)
    {
        result = "";
    }
    return result;
}


//code for PROCEED button in Encoding tab
void MainWindow::on_btn_proceed_clicked()
{
    QString outputString,inputString;
    inputString=ui->txt_einput->toPlainText();
    switch(ui->box_method->currentIndex())
    {
        case 0: //Convert to base64
        {
            outputString = to_Base64(inputString);
            break;
        }
        case 1: //Convert from Base64
        {
            outputString = from_Base64(inputString);
            break;
        }
        case 2: //Convert to Hex
        {
            outputString = to_Hex(inputString);
            break;
        }
        case 3: //Convert from Hex
        {
            outputString = from_Hex(inputString);
            break;
        }
    }
        //Print text to the Textbox
        ui->txt_eoutput->clear();
        ui->txt_eoutput->appendPlainText(outputString);
}
