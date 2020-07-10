#include <iostream>

using namespace std;

int main(){

int x;

system("clear");
 10 cout<<"                                                      "<<endl;
 11 cout<<"          GESTOR DE ENTORNOS VIRTUALES BY PRXUS       "<<endl;
 12 cout<<"                                                      "<<endl;
 13 cout<<"  ===================================================="<<endl;
 14 cout<<"             Entornos virtuales Disponibles           "<<endl;
 15 cout<<"  ===================================================="<<endl;
 16 cout<<"  #                                                  #"<<endl;
 17 cout<<"  #   1-  Deep Learning                              #"<<endl;
 18 cout<<"  #   2-  Machine Learning                           #"<<endl;
 19 cout<<"  #   3-  Math                                       #"<<endl;
 20 cout<<"  #   4-  tkinter                                    #"<<endl;
 21 cout<<"  #   5-  PyQT5                                      #"<<endl;
 22 cout<<"  #   6-  Flask con SQlite3 (base)                   #"<<endl;
 23 cout<<"  #   7-  Flask con MySQL                            #"<<endl;
 24 cout<<"  #   8-  Flask con PostgreSQL                       #"<<endl;
 25 cout<<"  #   9-  Flask con Blueprint Packages               #"<<endl;
 26 cout<<"  #   10- Django                                     #"<<endl;
 27 cout<<"  #   11- Jupyter                                    #"<<endl;
 28 cout<<"  #   12- Panda3d                                    #"<<endl;
 29 cout<<"  #   13- Kivy                                       #"<<endl;
 30 cout<<"  #   14- PyGame                                     #"<<endl;
 31 cout<<"  #   0-  Exit                                       #"<<endl;
 32 cout<<"  #                                                  #"<<endl;
 33 cout<<"  #   NOTA: Escribe 'exit' para salir del entorno    #"<<endl;
 34 cout<<"  ===================================================="<<endl;
 35 cout<<"                                                      "<<endl;
 36 cout<<"                                                      "<<endl;
 37 cout<<"                 Elige una opción: ";

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
