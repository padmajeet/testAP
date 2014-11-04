#ifndef MEMBER_H
#define MEMBER_H

#include<iostream>

using namespace std;

class Member
{
    public:
        Member();
        ~Member();
    private:
        string name;
        string mobileNo;
        string emailId;
        string address;
        string groups;
        bool fillDetails(string name, string mobileNo, string emailId, string groups);
        bool getDetails();
};

#endif
