bool issmiley(std::string a){
  int l = a.length();
if(l ==2){
  if(a[0]==':' || a[0] ==';'){
      if(a[1]==')' || a[1] == 'D'){
            return true;
            }
}
else{return false;}
}
if(l ==3){
  if(a[0]==':' || a[0] ==';'){
      if(a[1]=='-' || a[1] == '~'){
          if(a[2]=='D' || a[2]==')'){
            return true;
            }
}

}
else{return false;}
}
return false;
}
int countSmileys(std::vector<std::string> arr)
{

int count=0;
for(int i=0; i<arr.size(); i++){
  if(issmiley(arr[i])){
count++;
}
}
  return count;
}
