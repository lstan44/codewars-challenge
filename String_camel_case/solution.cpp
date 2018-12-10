#include <string>
using namespace std;

string to_camel_case(std::string text) {
  // TODO: Your code goes here!
for(int i=0; i<text.length(); i++){
  if(text[i]== '-' || text[i] == '_'){
  text.erase(text.begin() + i); 
  text[i]=std::toupper(text[i]);    
}
}
return text;
}
