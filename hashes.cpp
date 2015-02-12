/*
Hashes.cpp
This Class contains all the hashing functions
Some functions are built-in Function of Qt Framework
Some are invoked from lib Crypto++
Checkout the Crypto++ at: http://www.cryptopp.com/
*/

#include "hashes.h"

mainStrFunc strFunc;
Hashes::Hashes()
{

}

Hashes::~Hashes()
{

}

//Call some Built-in Hashsing Function based on their index
QString Hashes::buildinFunc(int index, QString input)
{
    QCryptographicHash objHash((QCryptographicHash::Algorithm)index);
    objHash.addData(input.toLatin1());
    return objHash.result().toHex().toUpper();

}

//Get CRC16 Checksum
QString Hashes::crc16String(QString input)
{
    //QString result;
    QByteArray tmp;
    tmp.append(input);
    quint16 crc = qChecksum(tmp.data(),tmp.length());
    return QString::number(crc,16).toUpper();
}

//Calculate CRC32
QString Hashes::crc32String(QString input)
{
    CryptoPP::CRC32 crc32;
    char digest[CryptoPP::CRC32::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    crc32.CalculateDigest((byte*)digest, (byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate alder32
QString Hashes::alder32String(QString input)
{
    CryptoPP::Adler32 alder32;
    char digest[CryptoPP::Adler32::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    alder32.CalculateDigest((byte*)digest, (byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate MD2
QString Hashes::MD2String(QString input)
{
    CryptoPP::MD2 md2;
    char digest[CryptoPP::MD2::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    md2.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate RIPEMD-128
QString Hashes::Ripemd128(QString input)
{
    CryptoPP::RIPEMD128 rip128;
    char digest[CryptoPP::RIPEMD128::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip128.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate RIPEMD-160
QString Hashes::Ripemd160(QString input)
{
    CryptoPP::RIPEMD160 rip160;
    char digest[CryptoPP::RIPEMD160::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip160.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate RIPEMD-256
QString Hashes::Ripemd256(QString input)
{
    CryptoPP::RIPEMD256 rip256;
    char digest[CryptoPP::RIPEMD256::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip256.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate RIPEMD-320
QString Hashes::Ripemd320(QString input)
{
    CryptoPP::RIPEMD320 rip320;
    char digest[CryptoPP::RIPEMD320::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip320.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}

//Calculate Tiger-192
QString Hashes::Tiger(QString input)
{
    CryptoPP::Tiger tiger;
    char digest[CryptoPP::Tiger::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    tiger.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}


//Calculate Whirlpool-512
QString Hashes::Whirlpool(QString input)
{
    CryptoPP::Whirlpool whirl;
    char digest[CryptoPP::Whirlpool::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    whirl.CalculateDigest((byte*)digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest,sizeof(digest));
}
