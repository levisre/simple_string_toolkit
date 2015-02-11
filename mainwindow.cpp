#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainstrfunc.h"
#include <QCryptographicHash>
#include "hashes.h"

static QString VERSION_INFO = "0.1 beta";
mainStrFunc StrFunc;
Hashes hash;
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
    ui->txt_version->setText("Version: " + VERSION_INFO);
}

MainWindow::~MainWindow()
{

    delete ui;
}

//Code for Calculate hash button in Hashing tab
void MainWindow::on_btn_Action_clicked()
{
    QString inputData, outputData;
    inputData = ui->txt_Input->toPlainText();
    int selectedAlgo = ui->box_Algo->currentIndex();
    if(selectedAlgo<=10)
    {
        outputData=hash.buildinFunc(selectedAlgo,inputData);
    }
    else
    {
        switch(selectedAlgo)
        {
            case 11://CRC16
            {
                outputData = StrFunc.crc16_Checksum(inputData);
            }
            case 12: //CRC32
            {
                outputData = hash.crc32String(inputData);
            }
            case 13: //ALDER32
            {
                outputData = hash.alder32String(inputData);
            }
            case 14: //RIPEMD128
            {
                outputData = hash.Ripemd128(inputData);
            }
            case 15: //RIPEMD160
            {
                outputData = hash.Ripemd160(inputData);
            }
            case 16: //RIPEMD256
            {
                outputData = hash.Ripemd256(inputData);
            }
            case 17:    //RIPEMD320
            {
                outputData = hash.Ripemd320(inputData);
            }
            case 18: //Tiger
            {
                outputData = hash.Tiger(inputData);
            }
            case 19: //Whirlpool
            {
                outputData = hash.Whirlpool(inputData);
            }
            case 20: //MD2
            {
                outputData = hash.MD2String(inputData);
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
