//
// Created by andre on 3/6/2025.
//

#include <bits/stdc++.h>
using namespace std;

class Dog{
     public:
     bool eat() {
          cout<<"Dog is eating"<<endl;
          return true;
     }
     int getAge() {
          return age;
     }
     int setAge(int newage) {
          age=newage;
          return age;
     }
     private:
     int age;
};

int main(){
     Dog dog1=Dog();
     dog1.eat();
     // dog1.age=10;
     // dog1.setAge();
     dog1.setAge(10);
     dog1.getAge();
     cout<<dog1.getAge()<<endl;
     return 0;
}