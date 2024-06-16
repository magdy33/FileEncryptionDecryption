#ifndef ENCRYPT_H
#define ENCRYPT_H

#include<iostream>
#include<string>

char cipherShiftValue(char later);
char decipherShiftValue(char later);

void cipherMessage(const std::string& message);
void decipherMessage(const std::string& message);


#endif // ENCRYPT_H