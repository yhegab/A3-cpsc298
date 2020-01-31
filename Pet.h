#include <iostream>
#include <string>
using namespace std;

class Pet{
  public:
//constructors
    Pet();
    Pet(int age, string type, string name, double weight);

//accessor methods
    string getName();
    string getType();
    int getAge();
    double getWeight();

//mutator method
    void setName(string name);
    void setType(string type);
    void setAge(int age);
    void setWeight(double weight);
  private:

//member variables
    string m_name;
    string m_type;
    int m_age;
    double m_weight;
};
