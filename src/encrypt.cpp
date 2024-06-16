
#include "encrypt.hpp"






#define SHIFTVALUE  4
#define UPPER_S   65
#define UPPER_E   90
#define LOWER_S   97
#define LOWER_E   122

char cipherShiftValue(char letter) {
    char ciphered;
    if (letter == 32) { 
        ciphered = 32;
    } else if (letter >= UPPER_S && letter <= UPPER_E) {
        ciphered = (letter - UPPER_S + SHIFTVALUE) % 26 + UPPER_S;
    } else if (letter >= LOWER_S && letter <= LOWER_E) {
        ciphered = (letter - LOWER_S + SHIFTVALUE) % 26 + LOWER_S;
    } else {
        ciphered = letter; 
    }
    return ciphered;
}


char decipherShiftValue(char letter) {
    char deciphered;
    if (letter == 32) { 
        deciphered = 32;
    } else if (letter >= UPPER_S && letter <= UPPER_E) {
        deciphered = (letter - UPPER_S - SHIFTVALUE + 26) % 26 + UPPER_S;
    } else if (letter >= LOWER_S && letter <= LOWER_E) {
        deciphered = (letter - LOWER_S - SHIFTVALUE + 26) % 26 + LOWER_S;
    } else {
        deciphered = letter; 
    }
    return deciphered;
}



void cipherMessage(const std::string& message)
{
    for(size_t i=0; i<message.size();i++)
    {
        char chiperd;
        chiperd=cipherShiftValue(message[i]);
        std::cout<<chiperd;
    }
}


void decipherMessage(const std::string& message)
{
    for(size_t i=0; i<message.size();i++)
    {
        char dechiperd;
        dechiperd=decipherShiftValue(message[i]);
        std::cout<<dechiperd;
    }
}








/*************************************************/
//          Just for Upper Case Letter           //
/*************************************************/

// #define SHIFTVALUE 1
// #define C_LATER_S 65
// #define C_LATER_E 90
// #define OFFSET C_LATER_E-C_LATER_S

// char cipherShiftValue(char letter)
// {
// char chiperd;
// if(letter == 32)
//     {
//         chiperd = 32;
//     }
// else if(letter>=C_LATER_S && letter<=C_LATER_E-SHIFTVALUE)
//         {
//             chiperd = letter + SHIFTVALUE ;
//         }
// else if(letter>=C_LATER_E-SHIFTVALUE)
//         {
//             chiperd = letter-25+SHIFTVALUE-1;   
//         }
// else{}

// return chiperd;
// }


// char decipherShiftValue(char letter)
// {
// char chiperd;
// if(letter == 32)
//     {
//         chiperd = 32;
//     }
// else if(letter>=C_LATER_S && letter<=C_LATER_E-SHIFTVALUE)
//         {
//             chiperd = letter - SHIFTVALUE ;
//         }
// else if(letter>=C_LATER_E-SHIFTVALUE)
//         {
//             chiperd = letter-25-SHIFTVALUE-1;   
//         }
// else{}

// return chiperd;
// }