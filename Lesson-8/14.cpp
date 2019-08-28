#include<iostream>

using namespace std;

class Cat {
    string name;
    string breed;
    int age;
public:
    void setName(string nameIn);

    void setBreed(string breedIn);

    void setAge(int ageIn);

    string getName();

    string getBreed();

    int getAge();

    void printInfo();
};

void Cat::setName(string nameIn) {
    name = nameIn;
}

void Cat::setBreed(string breedIn) {
    breed = breedIn;
}

void Cat::setAge(int ageIn) {
    age = ageIn;
}

string Cat::getName() {
    return name;
}

string Cat::getBreed() {
    return breed;
}

int Cat::getAge() {
    return age;
}

void Cat::printInfo() {
    cout << name << " " << breed << " " << age;
}


int main_14() {
    Cat cat1, cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    cout << "\n";
    cat2.printInfo();
    cout << "\n\n";

    return 0;
}
