#include"user.h"

User::User(std::string userName,std::string password,UserType userType)
:userName_(userName),password_(password),userType_(userType){

}

//getter and setter
void User::setUserName(std::string userName)
{
    this->userName_ = userName;
}

std::string User::getUserName() const{
    return this->userName_;
}

void User::setUserType(UserType userType)
{
    userType_ = userType;
}

UserType User::getUserType() const{
    return this->userType_;
}