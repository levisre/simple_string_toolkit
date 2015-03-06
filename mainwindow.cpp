/*
mainwindow.cpp
This class contains all the code for mainwindow to work. Created by Qt Creator
*/


#include "mainwindow.h"
#include "ui_mainwindow.h"

//Something may necessary in Code
static const QString VERSION_INFO = "0.1 beta";
static const QString CHAR_STEP_STR = "Character Step: ";
const QString GIMME_THING = "You must give me some valuable things first!";
mainStrFunc StrFunc;
Hashes hash;
//End Declaration

int step = 0;

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
    int selectedAlgo = ui->box_Algo->currentIndex();
    inputData = ui->txt_Input->toPlainText();
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
                outputData = hash.crc16String(inputData);
                break;
            }
            case 12: //CRC32
            {
                outputData = hash.crc32String(inputData);
                break;
            }
            case 13: //ALDER32
            {
                outputData = hash.alder32String(inputData);
                break;
            }
            case 14: //RIPEMD128
            {
                outputData = hash.Ripemd128(inputData);
                break;
            }
            case 15: //RIPEMD160
            {
                outputData = hash.Ripemd160(inputData);
                break;
            }
            case 16: //RIPEMD256
            {
                outputData = hash.Ripemd256(inputData);
                break;
            }
            case 17:    //RIPEMD320
            {
                outputData = hash.Ripemd320(inputData);
                break;
            }
            case 18: //Tiger
            {
                outputData = hash.Tiger(inputData);
                break;
            }
            case 19: //Whirlpool
            {
                outputData = hash.Whirlpool(inputData);
                break;
            }
            case 20: //MD2
            {
                outputData = hash.MD2String(inputData);
                break;
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
        case 5: //Convert from Int
        {
            break;
        }
        case 6: //Convert to Binary
        {
            outputString = StrFunc.to_Bin(inputString);
            break;
        }
        case 7: //Convert from Binary
        {
            break;
        }
        case 8: //Reverse String
        {
            outputString = StrFunc.ReverseString(inputString);
            break;
        }
        case 9: //Encode String using Rot13
        {
            outputString = StrFunc.CeasarSolver(inputString,13);
            break;
        }
        case 10://Encode to Base32
        {
            outputString = StrFunc.to_Base32(inputString);
            break;
        }
        case 11: //Decode from Base32
        {
            outputString = StrFunc.from_Base32(inputString);
            break;
        }
    case 12:
    {
        morse myMorse;
        outputString = myMorse.toMorse(inputString);
    }
    }
        //Print text to the Textbox
        ui->txt_eoutput->clear();
        ui->txt_eoutput->appendPlainText(outputString);
}

//Code for Decrease Step button
void MainWindow::on_btn_cDecStep_clicked()
{
    if(ui->txt_cInput->toPlainText().length()!=0)
    {
        if(step==0)
        {
            step = 25;
        }
        else
        {
            step-=1;
        }
        ui->lbl_cStepInfo->setText(CHAR_STEP_STR+ QString::number(step));
        ui->txt_cOutput->clear();
        ui->txt_cOutput->appendPlainText(StrFunc.CeasarSolver(ui->txt_cInput->toPlainText(),step));
    }
    else
    {
        ui->txt_cOutput->appendPlainText(GIMME_THING);
    }
}

//Code for Increase Step Button
void MainWindow::on_pushButton_2_clicked()
{
    if(ui->txt_cInput->toPlainText().length()!=0)
    {
        if(step>=25)
        {
            step = 0;
        }
        else
        {
            step+=1;
        }
        ui->lbl_cStepInfo->setText(CHAR_STEP_STR+ QString::number(step));
        ui->txt_cOutput->clear();
        ui->txt_cOutput->appendPlainText(StrFunc.CeasarSolver(ui->txt_cInput->toPlainText(),step));
    }
    else
    {
        ui->txt_cOutput->appendPlainText(GIMME_THING);
    }
}

//Clear Ceasar Solver Tab's Counter
void MainWindow::on_tab_group_currentChanged(int index)
{
    if(index!=2 && ui->txt_cInput->toPlainText().length()==0)
    {
        step=0;
    }
    ui->lbl_cStepInfo->setText("Character Step: "+QString::number(step));
}
