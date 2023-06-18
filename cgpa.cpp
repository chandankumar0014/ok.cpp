// C++ Program of CGPA Calculator
#include<iostream>
using namespace std;
class student{
public: int marks(){
cout<<"Enter marks of subject Maths,Physics";

}
public:
double Math, Physics;
char input(void){
    cin>>Math>>Physics;
}
int credit_math = 5, credit_physics = 3;
};

class student1{
public: int marks1(){
cout<<"Enter marks of subject Maths,Physics"<<endl;

}
public:
double Math, Physics;
char input(void){
    cin>>Math>>Physics;
}
int credit_math = 5, credit_physics = 3;
};

int main(void){
    student obj;
    obj.marks();
    obj.input();
    double credit_point,credit1_point;
    double sgpa;
    double credit_point1,credit1_point1;
    double sgpa1; 

    double cgpa;
    student1 obj1;
    obj1.marks1();
    obj1.input();
if (obj.Math>90 && obj.Math<100){


cout<<"Grade point is 10"<<endl;
credit_point = 10*5;
}
if (obj.Math >80 && obj.Math<90){
cout <<"Grade point is 9"<<endl;
credit_point = 9*5;
}
if (obj.Math >70 && obj.Math<80){
cout<<"Grade point is 8"<<endl;
credit_point = 8*5;
}
if (obj.Math>60 && obj.Math<70){
cout<<"Grade point is 7"<<endl;
credit_point = 7*5;
}
if (obj.Math>50 && obj.Math<60){
cout<<"Grade point is 6"<<endl;
credit_point = 6*5;
}
if (obj.Math >40 && obj.Math<50){
cout<<"Grade point is 5"<<endl;
credit_point = 5*5;
}
if (obj.Math>30 &&obj.Math<40){
cout<<"Grade point is 4"<<endl;
credit_point = 4*5;
}
if (obj.Math>20 && obj.Math<30){
cout<<"Grade point is 0"<<endl;
credit_point = 5*0;
}

if (obj.Physics>90 && obj.Physics<100){
cout<<"Grade point is 10"<<endl;
credit1_point = 3*10;
}
if (obj.Physics >80 && obj.Physics<90){
cout <<"Grade point is 9"<<endl;
credit1_point = 3*9;

}
if (obj.Physics >70 && obj.Physics<80){
cout<<"Grade point is 8"<<endl;
credit1_point = 3*8;
}
if (obj.Physics>60 && obj.Physics<70){
cout<<"Grade point is 7"<<endl;
credit1_point = 3*7;
}
if (obj.Physics>50 && obj.Physics<60){
cout<<"Grade point is 6"<<endl;
credit1_point = 3*6;
}
if (obj.Physics >40 && obj.Physics<50){
cout<<"Grade point is 5"<<endl;
credit1_point = 3*5;
}
if (obj.Physics>30 &&obj.Physics<40){
cout<<"Grade point is 4"<<endl;
credit1_point = 3*4;
}
if (obj.Physics>20 && obj.Physics<30){
cout<<"Grade point is 0"<<endl;
credit1_point = 3*0;
}
sgpa = (credit_point+credit1_point)/(3+5);
cout<<"Sgpa of the first sem is " << sgpa<<endl;
if (obj1.Math>90 && obj1.Math<100){
cout<<"Grade point is 10"<<endl;
credit_point1 = 10*5;
}
if (obj1.Math >80 && obj1.Math<90){
cout <<"Grade point is 9"<<endl;
credit_point1 = 9*5;
}
if (obj1.Math >70 && obj1.Math<80){
cout<<"Grade point is 8"<<endl;
credit_point1 = 8*5;
}
if (obj1.Math>60 && obj1.Math<70){
cout<<"Grade point is 7"<<endl;
credit_point1 = 7*5;
}
if (obj1.Math>50 && obj1.Math<60){
cout<<"Grade point is 6"<<endl;
credit_point1 = 6*5;
}
if (obj1.Math >40 && obj1.Math<50){
cout<<"Grade point is 5"<<endl;
credit_point1 = 5*5;
}
if (obj1.Math>30 &&obj1.Math<40){
cout<<"Grade point is 4"<<endl;
credit_point1 = 4*5;
}
if (obj1.Math>20 && obj1.Math<30){
cout<<"Grade point is 0"<<endl;
credit_point1 = 5*0;
}
if (obj1.Physics>90 && obj1.Physics<100){
cout<<"Grade point is 10"<<endl;
credit1_point1 = 3*10;
}
if (obj1.Physics >80 && obj1.Physics<90){
cout <<"Grade point is 9"<<endl;
credit1_point1 = 3*9;
}
if (obj1.Physics >70 && obj1.Physics<80){
cout<<"Grade point is 8"<<endl;
credit1_point1 = 3*8;
}
if (obj1.Physics>60 && obj1.Physics<70){
cout<<"Grade point is 7"<<endl;
credit1_point1 = 3*7;
}
if (obj1.Physics>50 && obj1.Physics<60){
cout<<"Grade point is 6"<<endl;
credit1_point1 = 3*6;
}
if (obj1.Physics >40 && obj1.Physics<50){
cout<<"Grade point is 5"<<endl;
credit1_point1 = 3*5;
}
if (obj1.Physics>30 &&obj1.Physics<40){
cout<<"Grade point is 4"<<endl;
credit1_point1 = 3*4;
}
if (obj1.Physics>20 && obj1.Physics<30){
cout<<"Grade point is 0"<<endl;
credit1_point1 = 3*0;
}
sgpa1 = (credit_point1+credit1_point1)/(3+5);
cout<<"Sgpa of the Second sem is " << sgpa1<<endl;

cgpa = (sgpa*8+sgpa1*8)/16;
cout<<"Final Cgpa of the one year will be "<<cgpa<<endl;
return 'x';
}


