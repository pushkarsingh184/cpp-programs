#include <iostream>
using namespace std;

/* a) Single Inheritance */
class A {
public:
    void showA() {
        cout << "Single Inheritance - Base Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Derived Class B" << endl;
    }
};

/* b) Multiple Inheritance */
class X {
public:
    void showX() {
        cout << "Base Class X" << endl;
    }
};

class Y {
public:
    void showY() {
        cout << "Base Class Y" << endl;
    }
};

class Z : public X, public Y {
public:
    void showZ() {
        cout << "Multiple Inheritance - Derived Class Z" << endl;
    }
};

/* c) Multilevel Inheritance */
class P {
public:
    void showP() {
        cout << "Base Class P" << endl;
    }
};

class Q : public P {
public:
    void showQ() {
        cout << "Intermediate Class Q" << endl;
    }
};

class R : public Q {
public:
    void showR() {
        cout << "Multilevel Inheritance - Derived Class R" << endl;
    }
};

/* d) Hierarchical Inheritance */
class M {
public:
    void showM() {
        cout << "Base Class M" << endl;
    }
};

class N : public M {
public:
    void showN() {
        cout << "Derived Class N" << endl;
    }
};

class O : public M {
public:
    void showO() {
        cout << "Derived Class O" << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "\n" << name << endl;

    // Single Inheritance
    cout << "\nSingle Inheritance:" << endl;
    B b;
    b.showA();
    b.showB();

    // Multiple Inheritance
    cout << "\nMultiple Inheritance:" << endl;
    Z z;
    z.showX();
    z.showY();
    z.showZ();

    // Multilevel Inheritance
    cout << "\nMultilevel Inheritance:" << endl;
    R r;
    r.showP();
    r.showQ();
    r.showR();

    // Hierarchical Inheritance
    cout << "\nHierarchical Inheritance:" << endl;
    N n;
    O o;
    n.showM();
    n.showN();
    o.showM();
    o.showO();

    return 0;
}