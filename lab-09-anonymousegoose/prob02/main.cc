// Rick Morales
// CPSC 121A-15
// March 8, 2024
// rickymorales100@csu.fullerton.edu
// anonymousegoose
// Lab 9-2

#include <iostream>
#include <memory>

#include "network.h"
#include "phone.h"
using namespace std;

int main() {
  Network csuf_network;

  shared_ptr<Phone> phone1 = make_shared<Phone>("Anna");
  shared_ptr<Phone> phone2 = make_shared<Phone>("Raf");
  shared_ptr<Phone> phone3 = make_shared<Phone>("JC");

  csuf_network.AddPhone(phone1);
  csuf_network.AddPhone(phone2);
  csuf_network.AddPhone(phone3);

  auto message1 = phone1->AuthorMessage("Sup");
  csuf_network.SendMessage(message1, "Raf");

  auto message2 = phone2->AuthorMessage("Lol");
  csuf_network.SendMessage(message2, "Anna");

  vector<string> jcs_class = {"Anna", "Raf"};
  auto message3 = phone3->AuthorMessage("Hi class!");
  csuf_network.SendMessage(message3, jcs_class);

  auto message4 = phone1->AuthorMessage("Hi Prof!");
  csuf_network.SendMessage(message4, "JC");

  auto message5 = phone2->AuthorMessage("help how do C++");
  csuf_network.SendMessage(message5, "JC");

  cout << "Printing messages sent to Anna:" << endl;
  phone1->PrintMessages();

  cout << "\nPrinting messages sent to Raf:" << endl;
  phone2->PrintMessages();

  cout << "\nPrinting messages sent to JC:" << endl;
  phone3->PrintMessages();

  return 0;
}