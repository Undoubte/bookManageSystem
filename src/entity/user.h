#ifndef USER_H
#define USER_H

#include<string>

enum class UserType{ADMIN,NORMAL};
class User{
public:
    //构造方法
    User(){}

    User(std::string userName,std::string password,UserType userType);

    //getter and setter
    void setUserName(std::string userName);
    std::string getUserName() const;

    void setUserType(UserType userType);
    UserType getUserType() const; 

private:
    std::string userName_;
    std::string password_;
    UserType userType_;
};

#endif