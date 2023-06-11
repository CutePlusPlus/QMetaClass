#include <iostream>

#include <qobject.hpp>

class Test : public QObject
{
    Q_OBJECT
public: 
__pragma(warning(push)) 
    static const QMetaObject staticMetaObject; 
    virtual const QMetaObject *metaObject() const; 
    virtual void *qt_metacast(const char *); 
    virtual int qt_metacall(QMetaObject::Call, int, void **); 
    static inline QString tr(const char *s, const char *c = nullptr, int n = -1) { return staticMetaObject.tr(s, c, n); } 
private: 
    static void qt_static_metacall(QObject *, QMetaObject::Call, int, void **); 
__pragma(warning(pop)) 
    struct QPrivateSignal { explicit QPrivateSignal() = default; };
};


class Test2 : public Test
{
    Q_OBJECT
};

int main(int, char**){
    std::cout << "Hello, from Example!\n";

    Test test;

    const char* name = test.staticMetaObject.className();
    
    std::cout << name << std::endl;
}

#include "moc_main.cpp"