#ifndef ADDRESS_BOOK
#define ADDRESS_BOOK

#include<iostream>
#include "Member.h"

class AddressBook
{
    public:
        AddressBook();
        ~AddressBook();
        bool addContact();
        bool removeContact();
        bool modifyContact();
};
#endif
