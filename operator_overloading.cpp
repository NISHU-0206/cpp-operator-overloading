#include<iostream>
using namespace std;

class ComplexNumber{
    private:
    float r,i;
    public:
    ComplexNumber(float real,float imag){         //parameterized constructor
        r=real;
        i=imag;
    }

    ComplexNumber(){                             //default constructor
        r=0;
        i=0;
    }
    
    ComplexNumber operator + (ComplexNumber c){   //operator overloading
        ComplexNumber temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    
    ComplexNumber operator - (ComplexNumber a){
        ComplexNumber t;
        t.r=r-a.r;
        t.i=i-a.i;
        return t;
    }
    ComplexNumber operator * (ComplexNumber b){
        ComplexNumber x;
        x.r=r*x.r;
        x.i=i*x.i;
        return x;
    }

    operator double(void){                //type casting
        double re;
        re=r;
        return re;
    }

    ComplexNumber(double d){
        ComplexNumber y;
        r=d;
        i=0.0;
    }

    void display(){                      //displaying in complex number format
        cout<<r<<"+j"<<i<<endl;
    }
};

int main(){
    ComplexNumber c1(2.5,5.0);            //parameterized constructor call
    ComplexNumber c2;                     //default constructor call
    ComplexNumber c3;
    ComplexNumber c4;
    ComplexNumber c5;
    cout<<"C1 = ";c1.display();
    cout<<"C2 = ";c2.display();

    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    cout<<"after addition : ";c3.display();
    cout<<"after subtraction : ";c4.display();
    cout<<"after multiplication : ";c5.display();
    
    double d=c1;
    cout<<"after complex to double type conversion : "<<d<<endl;
    
    double d1;
    cout<<"enter double value : "<<endl;
    cin>>d1;
    ComplexNumber c6=ComplexNumber(d1);
    cout<<"after double to complex conversion : ";c6.display();
}