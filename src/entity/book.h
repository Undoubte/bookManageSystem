#ifndef BOOK_H
#define BOOK_H

#include<string>

class Book{
public:
    Book(){} //默认构造函数
    Book(std::string isbn,int stock); //有参构造

    //getter/setter方法
    std::string getIsbn() const;
    int getStock() const;

    void setStock(int num);

private:
    std::string isbn_; //序列号 唯一标识
    int stock_; //库存
};

#endif