#include"borrowRecord.h"

BorrowRecord::BorrowRecord(int id,std::string isbn,std::string userName,std::time_t borrowDate,std::time_t dueDate,bool returned){
    this->id_ = id;
    this->isbn_ = isbn;
    this->userName_ = userName;
    this->borrowDate_ = borrowDate;
    this->dueDate_ = dueDate;
    this->returned_ = returned;
}

//getter and setter
int BorrowRecord::getId() const{
    return this->id_;
}

std::string BorrowRecord::getIsbn() const{
    return this->isbn_;
}

std::string BorrowRecord::getUserName() const{
    return this->userName_;
}

std::time_t BorrowRecord::getBorrowDate() const{
    return this->borrowDate_;
}

std::time_t BorrowRecord::getDueDate() const{
    return this->dueDate_;
}

bool BorrowRecord::getReturned() const{
    return this->returned_;
}

void BorrowRecord::setId(int id){
    this->id_ = id;
}

void BorrowRecord::setIsbn(std::string isbn){
    this->isbn_ = isbn;
}

void BorrowRecord::setUserName(std::string userName){
    this->userName_ = userName;
}

void BorrowRecord::setBorrowDate(std::time_t borrowDate){
    this->borrowDate_ = borrowDate;
}

void BorrowRecord::setDueDate(std::time_t dueDate){
    this->dueDate_ = dueDate;
}

void BorrowRecord::setReturned(bool returned){
    this->returned_ = returned;
}   