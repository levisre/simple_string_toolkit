#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainstrfunc.h"
#include <QCryptographicHash>
//Version String
QString Version = "0.1 beta";
mainStrFunc StrFunc;
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
    int selectedAlgo = ui->box_Algo->currentIndex();
    QString inputData, outputData;
    QByteArray tmp;
    inputData = ui->txt_Input->toPlainText();
    if(selectedAlgo<=10)
    {
        QCryptographicHash objHash((QCryptographicHash::Algorithm)selectedAlgo);
        objHash.addData(inputData.toLatin1());
        outputData=objHash.result().toHex().toUpper();
    }
    else
    {
        switch(selectedAlgo)
        {
            case 11://CRC16
            {
                outputData = StrFunc.crc16_Checksum(inputData);
            }
        }
    }
    ui->txt_output->clear();
    ui->txt_output->appendPlainText(outputData);
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
            outputString = StrFunc.to_Base64(inputString);
            break;
        }
        case 1: //Convert from Base64
        {
            outputString = StrFunc.from_Base64(inputString);
            break;
        }
        case 2: //Convert to Hex
        {
            outputString = StrFunc.to_Hex(inputString);
            break;
        }
        case 3: //Convert from Hex
        {
            outputString = StrFunc.from_Hex(inputString);
            break;
        }
        case 4: //Convert to Int
        {
            outputString = StrFunc.to_Int(inputString);
            break;
        }
        case 6: //Convert to Binary
        {
            outputString = StrFunc.to_Bin(inputString);
            break;
        }
        case 8: //Reverse String
        {
            outputString = StrFunc.ReverseString(inputString);
            break;
        }
    }
        //Print text to the Textbox
        ui->txt_eoutput->clear();
        ui->txt_eoutput->appendPlainText(outputString);
}
