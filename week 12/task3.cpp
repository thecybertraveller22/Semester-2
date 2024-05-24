//#include<iostream>
//#include"task3.h"
//#include<string>
//using namespace std;
//
//Computer::Computer(string cn,int p)
//{
//    companyname=cn;
//    price=p;
//}
//
//void Computer::setcompany(string cn)
//{
//    companyname=cn;
//}
//
//void Computer::setprice(int p)
//{
//    price=p;
//}
//
//string Computer::getcompany()
//{
//    return companyname;
//}
//
//int Computer::getprice()
//{
//    return price;
//}
//
//void Computer::show()
//{
//    cout<<companyname<<endl;
//    cout<<price<<endl;
//}
//
//Desktop::Desktop(string c,int ms,int pt)
//{
//    color = c;
//    monitorsize = ms;
//    processortype = pt;
//}
//
//void Desktop::show()
//{
//    Computer::show();
//    cout<<color<<endl;
//    cout<<monitorsize<<endl;
//    cout<<processortype<<endl;
//}
//
//
//
//Laptop::Laptop(string c,int s,int w,int pt)
//{
//    color=c;
//    size=s;
//    weight=w;
//    processortype=pt;
//}
//
//void Laptop::show()
//{
//    Computer::show();
//    cout<<color<<endl;
//    cout<<size<<endl;
//    cout<<weight<<endl;
//    cout<<processortype<<endl;
//}
//
//
////int main()
////{
////
////    Computer* c1=new Computer("Dell",300);
////
////    c1->show();
////    c1 = new Desktop("pink",43,4900);
////    c1->show();
////    c1 = new Laptop("White",43,145,5900);
////    c1->show();
////
////    return 0;
////}
//
//int main()
//{
//    Computer* c1 = new Computer("Dell", 300);
//    c1->show();
//
//    Desktop* desktop = new Desktop("pink", 43, 4900);
//    desktop->show();
//
//    Laptop* laptop = new Laptop("White", 43, 145, 5900);
//    laptop->show();
//
//    delete c1;
//    delete desktop;
//    delete laptop;
//
//    return 0;
//}







#include "task3.h"

Computer :: Computer(string n, float p)
{
    companyName = n;
    price = p;
}
void Computer :: show()
{
    cout<<"Company Name: "<<companyName<<endl;
    cout<<"Price: "<<price<<endl;
}
Desktop :: Desktop(string c, string p, float s)
{
    color = c;
    processor = p;
    size = s;
}
void Desktop :: show()
{
    cout<<"Color: "<<color<<endl;
    cout<<"Processor: "<<processor<<endl;
    cout<<"Size "<<size<<endl;
}
Laptop :: Laptop(string c, string p, float s, float w)
{
    color = c;
    processor = p;
    size = s;
    weight = w;
}
void Laptop :: show()
{
    cout<<"Color: "<<color<<endl;
    cout<<"Processor: "<<processor<<endl;
    cout<<"Size "<<size<<endl;
    cout<<"Weight: "<<weight<<endl;
}

int main()
{
    Computer *C1[3];
    C1[0] = new Computer;
    C1[1] = new Desktop;
    C1[2] = new Laptop;
    for(int i=0; i<3; i++)
    {
        C1[i]->show();
        cout<<endl;
    }
    return 0;
}
