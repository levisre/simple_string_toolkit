#ifndef CRYPTOGRAPHIC_H
#define CRYPTOGRAPHIC_H


#include <QtCore>
#include "Cryptopp/3way.h"
#include "Cryptopp/aes.h"
#include "Cryptopp/blowfish.h"
#include "Cryptopp/des.h"
#include "Cryptopp/dh.h"
#include "Cryptopp/dh2.h"
#include "Cryptopp/rc2.h"
#include "Cryptopp/rc5.h"
#include "Cryptopp/rc6.h"
#include "Cryptopp/rsa.h"

class cryptographic
{
public:
    cryptographic();
    ~cryptographic();
};

#endif // CRYPTOGRAPHIC_H
