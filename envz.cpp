#include <iostream>

using namespace std;

int main(){

int x;

system("clear");
cout<<"Elige un número de la lista"<<endl;
cout<<"======================================="<<endl;
cout<<"                           "<<endl;
cout<<"1-  Deep Learning"<<endl;
cout<<"2-  MachineLearning"<<endl;
cout<<"3-  Math"<<endl;
cout<<"4-  tkinter"<<endl;
cout<<"5-  PyQT5"<<endl;
cout<<"6-  Flask con SQlite3 (base)"<<endl;
cout<<"7-  Flask con MySQL"<<endl;
cout<<"8-  Flask con PostgreSQL"<<endl;
cout<<"9-  Flask con Blueprint Packages"<<endl;
cout<<"10- Django"<<endl;
cout<<"11- Jupyter"<<endl;
cout<<"12- Panda3d"<<endl;
cout<<"13- Kivy"<<endl;
cout<<"14- PyGame"<<endl;
cout<<"0-  Exit"<<endl;
cout<<"    "<<endl;
cout<<"    "<<endl;
cout<<"NOTA: Escribe 'exit' para salir del entorno"<<endl;
cout<<"======================================="<<endl;
cout<<"    "<<endl;
cout<<"    "<<endl;
cout<<"Elige una opción: ";
cin>>x;
system("clear");

if(x==1){
system("bash --rcfile /home/roy/e/deepl/bin/activate");
}

if(x==2){
system("bash --rcfile /home/roy/e/ml/bin/activate");
}

if(x==3){
system("bash --rcfile /home/roy/e/math/bin/activate");
}

if(x==4){
system("bash --rcfile /home/roy/e/tkinter/bin/activate");
}

if(x==5){
system("bash --rcfile /home/roy/e/pyqt5/bin/activate");
}

if(x==6){
system("bash --rcfile /home/roy/e/flask-basico/bin/activate");
}

if(x==7){
system("bash --rcfile /home/roy/e/flask-adv/bin/activate");
}

if(x==8){
system("bash --rcfile /home/roy/e/flask-pg/bin/activate");
}

if(x==9){
system("bash --rcfile /home/roy/e/flask-w-blue/bin/activate");
}

if(x==10){
system("bash --rcfile /home/roy/e/django-base/bin/activate");
}

if(x==11){
system("bash --rcfile /home/roy/e/jupyter/bin/activate");
}

if(x==12){
system("bash --rcfile /home/roy/e/panda3d/bin/activate");
}

if(x==13){
system("bash --rcfile /home/roy/e/kivy/bin/activate");
}

if(x==14){
system("bash --rcfile /home/roy/e/pygame/bin/activate");
}

if(x==0){
system("exit");
}

return 0;
}
