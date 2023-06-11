struct Foo
{
    static int numFoos;
    Foo() {
        numFoos++;
    }
    ~Foo(){
        numFoos--;
    }
};
int Foo::numFoos;
