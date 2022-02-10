#include <iostream>

class ContactBookUI{
public:
  virtual void show() = 0;

private:
};

class ByFirstName :: public ContactBookUI{
  void show(){
    std::cout<<contact.getFirstName<<contact.getLastName<<contact.getEmail<<std::endl;
  }
};

class ByLast :: public ContactBookUI{
  void show(){
    std::cout<<contact.getLastName<<contact.getFirstName<<contact.getEmail<<std::endl;
  }
};

class ByEmail :: public ContactBookUI{
  void show(){
    std::cout<<contact.getEmail<<contact.getLastName<<contact.getFirstName<<std::endl;
  }
};
