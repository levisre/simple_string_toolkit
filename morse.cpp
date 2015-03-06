#include "morse.h"

const QString CHAR_TABLE ="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890.,";
const QString MORSE_TABLE[] =
{
  ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
  ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
  ".--","-..-","-.--","--..",".----","..---","...--","....-",".....",
  "-....","--...","---..","----.","-----",".-.-.-","--..--"
};
morse::morse()
{

}

morse::~morse()
{

}

QString morse::toMorse(QString input)
{
    QString tmp = input.toUpper();
    QString result;

        for(int i=0;i<tmp.length();i++)
        {
           int index=CHAR_TABLE.indexOf(tmp[i]);
           if (index!=-1)
           {
               result+=MORSE_TABLE[index];
               result+=" ";
           }
        }

    return result;
}

