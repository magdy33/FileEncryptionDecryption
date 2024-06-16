
#include"encrypt.hpp"


int main ()
{
    std::string message = "hello world";
    cipherMessage(message);
    
    std::cout<<"\n";

    std::string cipheredMessage = "lipps asvph"; 
    decipherMessage(cipheredMessage);
}