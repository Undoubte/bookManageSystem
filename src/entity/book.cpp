#include"book.h"

Book::Book(std::string isbn,int stock) : isbn_(isbn),stock_(stock){

}

std::string Book::getIsbn() const{
    return this->isbn_;
}

int Book::getStock() const{
    return this->stock_;
}
    
void Book::setStock(int num){
    this->stock_ = num;
}