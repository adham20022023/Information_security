#include<iostream>
#include<string>
int main()
{
    std::string message;
    std::cout << "Enter The Encrypted Text:";
    getline(std::cin, message);
    for (int key = 0; key < 26; key++)
    {
        std::string plain_text="";
        for (size_t i = 0; i < message.length(); i++)
        {
            if (isalpha(message[i])) {
                /*
                * we need to subtract from A to get the index of character from 0 to 25
                * +26 to keep the number postive always
                * %26 because The alogritm P=C-k mod 26
                * +'A' To get The Acscii Code
                */
                char c = (toupper(message[i]) - 'A' - key + 26) % 26 + 'A';
                plain_text +=c;
            }
            else {
                plain_text += message[i];
            }

        }
        std::cout << "key: " << key << ":: " << plain_text << std::endl;


    }
    return 0;
}