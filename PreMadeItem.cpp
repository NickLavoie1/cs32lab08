#include "PreMadeItem.h"


PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem::IceCreamItem(size){
  this->name = name;
  this->size = size;
  if(size == "small")
    price = 4.00;
  else if(size == "medium")
    price = 6.00;
  else
    price = 7.50;
}

PreMadeItem::~PreMadeItem(){

}

std::string PreMadeItem::composeItem(){
  //  std:: string res = "Pre-made Size: " + "\n";
  return ""; 
}

double PreMadeItem::getPrice(){
  return price;
}
