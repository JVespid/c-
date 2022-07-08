
#include <iostream>

using namespace std;

class Fecha{
  public:
	int dia;
	Fecha(int _dia);
	friend Fecha sumarFaecha( Fecha, int __dia);
	friend Fecha sumarFaecha( Fecha, Fecha);
	
	Fecha operator+(Fecha obj1);
};

Fecha Fecha::operator+(Fecha obj1){
	
    int _dia = obj1.dia+dia;
    
    Fecha obj3(_dia);
    return obj3;  
}

Fecha::Fecha(int _dia=0) {
    dia =_dia;
}

Fecha sumarFaecha(Fecha obj1, int __dia) {
   
   Fecha obj2(__dia);
   
   Fecha obj3;
   
   obj3 = (obj1+obj2);
   
   return obj3;
   
}

Fecha sumarFaecha(Fecha obj1, Fecha obj2){
   Fecha obj3;
   
   obj3 = (obj1 + obj2);
   
   return obj3;
    
}


int main(int argc, char *argv[])
{

    Fecha obj1(2), obj2(3), obj3;
    
    obj3=sumarFaecha(obj1, 1);
    cout<<"El nuevo dia es :\n"<<obj3.dia<<endl;
    
    obj3=sumarFaecha(obj1,obj2);
    cout<<"el nuevo dia es:\n"<<obj3.dia<<endl;
    
    system("pause");
	
}
