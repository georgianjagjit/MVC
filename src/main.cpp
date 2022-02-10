#include "ContactBookUI.h"
#include "ContactBook.h"
#include <vector>

int main(int argc, char const *argv[]) {
  // Create "model" objects
  Contact* instructor = new Contact("Anvik", "Dr.", "john.anvik@uleth.ca");
  Contact* marker = new Contact("Deutekom", "Steve", "mark3720@uleth.ca");

  // Create a collection of "views"
  std::vector<ContactBookUI*> views;
  views.push_back(new ByFirstName());
  views.push_back(new ByLastName());
  views.push_back(new ByEmail());


  // Create the "controller"
  ContactBook* contacts = new ContactBook();
  contacts->add(instructor);
  contacts->add(marker);

  // Use different views
  for(ContactBookUI* ui : views) {
    contacts->setUI(ui);
    contacts->display();
    std::cout << std::endl;
  }

  return 0;
}
