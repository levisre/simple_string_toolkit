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
    ui->tab_group->setCurrentIndex(0);
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
    ui->txt_output->appendPlainText(objHash.result().toHex().toUpper());
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

//Convert from Int o Ascii
QString from_Int(QString input)
{
    QByteArray tmp;
    tmp.append(input);
}

//Convert from Ascii to Int
QString to_Int(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    QString result;
    for(int i=0;i<tmp.length();i++)
    {
        result += QString::number(tmp[i]);
    }
    return result;
}


//Convert Ascii to binary data
QString to_Bin(QString input)
{
    QString result;
    QByteArray tmp;
    tmp.append(input);
    for(int i=0;i<tmp.length();i++)
    {
        result += QString::number(tmp[i],2);
        result += " ";
    }
    return result;
}

//Reverse String
QString ReverseString(QString input)
{
    QString result;
    for(int i=input.length()-1;i>=0;i--)
    {
        result+=input[i];
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
        case 4: //Convert to Int
        {
            outputString = to_Int(inputString);
            break;
        }
        case 6: //Convert to Binary
        {
            outputString = to_Bin(inputString);
            break;
        }
        case 8: //Reverse String
        {
            outputString = ReverseString(inputString);
            break;
        }
    }
        //Print text to the Textbox
        ui->txt_eoutput->clear();
        ui->txt_eoutput->appendPlainText(outputString);
}
