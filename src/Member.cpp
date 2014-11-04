#include "Member.h"
using namespace std;

Member::Member():
    name(""),
    mobileNo(""),
    emailId(""),
    address(""),
    groups("")
{
}
Member::~Member()
{

}
bool Member::fillDetails(string name, string mobileNo, string emailId, string groups)
{
    return true;
}
bool Member::getDetails()
{
    return true;
}

