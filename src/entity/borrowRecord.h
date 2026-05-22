#ifndef BORROWRECORD_H
#define BORROWRECORD_H

#include<string>
#include<ctime>

class BorrowRecord{
public:
    BorrowRecord(){}

    BorrowRecord(int id,std::string isbn,std::string userName,std::time_t borrowDate,std::time_t dueDate,bool returned);

    //getter and setter
    int getId() const;
    std::string getIsbn() const;
    std::string getUserName() const;
    std::time_t getBorrowDate() const;
    std::time_t getDueDate() const;
    bool getReturned() const;

    void setId(int id);
    void setIsbn(std::string isbn);
    void setUserName(std::string userName);
    void setBorrowDate(std::time_t borrowDate);
    void setDueDate(std::time_t dueDate);
    void setReturned(bool returned);
private:
    int id_; //自增id
    std::string isbn_;
    std::string userName_;
    std::time_t borrowDate_;
    std::time_t dueDate_;
    bool returned_;
};

#endif