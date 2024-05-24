// Composition of classes
/*
#include<iostream>
using namespace std;

class Engine {
public:
  void start()
  {
    cout<<"Start"<<endl; 
  }
  
  void stop()
  {
    cout<<"Stop"<<endl;
  }
};

class Car {
public:
  Car(Engine engine) : m_engine(engine) { }

  void start() { m_engine.start(); }
  void stop() { m_engine.stop(); }

private:
  Engine m_engine;
};

int main()
{
    Engine engine;
    Car car(engine);

    car.start(); // calls engine.start()
    car.stop();  // calls engine.stop()

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

class part
{
    int size, marks;

    public:
        part()
        {

        }
        part(int , int)
        {}
        void print()
        {
            cout<<"Hello World"<<endl;
        }
        void call()
        {
            cout<<"Hi";
        }

};
class whole
{
    private:
        int age;
        int number;
        class part p;

    public:
        whole()
        {}
        void temp()
        {
            p.print();
            p.call();
        }
        ~whole()
        {}
};

int main()
{
    whole w1;
    w1.temp();
    return 0;
}*/

#include <iostream>

using namespace std;

class part
{
    int size, marks;

    public:
        part()
        {

        }
        part(int s, int m)
        {
            size=s;
            marks=m;
        }
        void print()
        {
            cout<<"Hello World"<<endl;
            cout<<"Size = "<<size<<endl;
        }
        void call()
        {
            cout<<"Hi"<<endl;
        }

};
class whole
{
    private:
        int age;
        int number;
        class part join;

    public:
        whole():age(10), number(100), join(10, 10)
        {}
        void tarzan()
        {
            join.print();
            join.call();
        }
        ~whole()
        {
            cout<<"DEsctructor"<<endl;
        }
};

int main()
{
    whole w1;
    part p1(92,4);
    //p1.part(1,2);
    w1.tarzan();
    return 0;
}

/*
#include <iostream>
 using namespace std;
 class Test{
 private:
 int val;
 public:
Test(const Test& _other) : val(_other.val + 1)
 { }

 Test(int _val) : val(_val) { }

 int get_val() const{ return val;}

 const Test& operator=(Test const& _other)
 {
    val = _other.val;
    return *this;
 }
 Test operator+(Test const& _other)
 {
    Test t(val+ _other.val);
    return t;
 }
 };

 ostream& operator<<(ostream& stream, const Test & _val){
 stream << _val.get_val();
 return stream;
 }

int main( ){
 Test a(1), b(2),c(a+b);
 a = b+c;

 //a=b;
 cout << a << " " << b<<" "<<c;
 }
*/