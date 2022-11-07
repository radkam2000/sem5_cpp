#ifndef CONTACTS_H
#define CONTACTS_H
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <iostream>
#include "Contact.h"

using namespace boost::multi_index;

class Contacts{
private:
    typedef multi_index_container<
        Contact,
        indexed_by<
            hashed_unique<
                member<Contact, int, &Contact::number>
            >
        >
    >

public:
};

#endif