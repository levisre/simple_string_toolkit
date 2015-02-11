#include "hashes.h"
mainStrFunc strFunc;
Hashes::Hashes()
{

}

Hashes::~Hashes()
{

}

QString Hashes::buildinFunc(int index, QString input)
{
    QCryptographicHash objHash((QCryptographicHash::Algorithm)index);
    objHash.addData(input.toLatin1());
    return objHash.result().toHex().toUpper();

}

QString Hashes::crc32String(QString input)
{
    CryptoPP::CRC32 crc32;
    byte digest[CryptoPP::CRC32::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    crc32.CalculateDigest(digest, (byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest).left(8);
}

QString Hashes::alder32String(QString input)
{
    CryptoPP::Adler32 alder32;
    byte digest[CryptoPP::Adler32::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    alder32.CalculateDigest(digest, (byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}

QString Hashes::MD2String(QString input)
{
    CryptoPP::MD2 md2;
    byte digest[CryptoPP::MD2::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    md2.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}


QString Hashes::Ripemd128(QString input)
{
    CryptoPP::RIPEMD128 rip128;
    byte digest[CryptoPP::RIPEMD128::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip128.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}


QString Hashes::Ripemd160(QString input)
{
    CryptoPP::RIPEMD160 rip160;
    byte digest[CryptoPP::RIPEMD160::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip160.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}


QString Hashes::Ripemd256(QString input)
{
    CryptoPP::RIPEMD256 rip256;
    byte digest[CryptoPP::RIPEMD256::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip256.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}


QString Hashes::Ripemd320(QString input)
{
    CryptoPP::RIPEMD320 rip320;
    byte digest[CryptoPP::RIPEMD320::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    rip320.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}

QString Hashes::Tiger(QString input)
{
    CryptoPP::Tiger tiger;
    byte digest[CryptoPP::Tiger::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    tiger.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}

QString Hashes::Whirlpool(QString input)
{
    CryptoPP::MD2 whirl;
    byte digest[CryptoPP::Whirlpool::DIGESTSIZE];
    std::string stdInput = input.toStdString();
    whirl.CalculateDigest(digest,(byte*)stdInput.c_str(),stdInput.length());
    return strFunc.convertBuffer(digest);
}
