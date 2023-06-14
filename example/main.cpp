#include <iostream>
#include <atomic>

#include <qobject.hpp>
#include <qtext.hpp>

class Test : public QObject
{
    Q_OBJECT
};


class Test2 : public Test
{
    Q_OBJECT
};

int main(int, char**)
{
    std::cout << "Hello, from Example!\n";

    Test test;

    const char* name = test.staticMetaObject.className();

    QString str1; 
    QString str2;

    //operator%<QStringBuilder<char16_t [5],QString>,char [4]>(const QStringBuilder<char16_t [5],QString> & a, const char[4] & b)
    QString s3 = u"Pre:" % str1 % "End";
    
    auto ai = std::atomic<int>(42); // error

    std::cout << name << std::endl;
}

#include "moc_main.cpp"