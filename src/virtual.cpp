
static int counter = 0;

struct A
{
    virtual void func()
    {
        counter += 1;
    }
};

struct B : A
{
    void func()
    {
        counter += 2;
    }
};

static B b;

int main(int argc, char const *argv[])
{
    A *ptr = &b;

    b.func();
    ptr->func();
    return 0;
}
