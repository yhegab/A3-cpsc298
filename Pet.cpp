#include "Pet.h"
using namespace std;
//default constructor
Pet::Pet(){
  m_name = "NoName";
  m_type = "noType";
  m_age = -1;
  m_weight = -1;
}
//overloaded constructor
Pet::Pet(int age, string type, string name, double weight){
  m_age = age;
  m_type = type;
  m_name = name;
  m_weight = weight;
}
//getter method, age
int Pet::getAge(){
  return m_age;
}
//getter method, type
string Pet::getType(){
  return m_type;
}
//getter method, name
string Pet::getName(){
  return m_name;
}
//getter method, weight
double Pet::getWeight(){
  return m_weight;
}
//setter method, type
void Pet::setType(string type){
  m_type = type;
}
//setter method, name
void Pet::setName(string name){
  m_name = name;
}
//setter method, age
void Pet::setAge(int age){
  m_age = age;
}
//setter method, weight
void Pet::setWeight(double weight){
  m_weight = weight;
}
//main method, tests out the values
int main(){
  Pet *p = new Pet(12, "dog", "Sparky", 5.4);
  Pet *p2 = new Pet(15, "cat", "nuutsak", 89.5);
  cout << "Pet 1" << endl << "Name: " << p->getName() << endl << "Type: " << p->getType() << endl << "Age: " << p->getAge() << endl << "Weight: " << p->getWeight() << endl << endl;
  cout << "Pet 2" << endl << "Name: " << p2->getName() << endl << "Type: " << p2->getType() << endl << "Age: " << p2->getAge() << endl << "Weight: " << p2->getWeight() << endl << endl;
  delete p;
  delete p2;
}
