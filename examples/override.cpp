using namespace std;

class B {
    B() {}
    ~B() {}
    virtual void f() = 0;

};

class D : public B {
    void f() override {
        cout << "f()" << endl;
    }

}

int main(int argc, char *argv[])
{
    B* p = new D();
    p->f();
}

