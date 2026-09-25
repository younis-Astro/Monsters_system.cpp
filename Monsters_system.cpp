#include <iostream>
#include <string>
class monster{
private:
string name;
int damage;
public:
monster(string n , int d){
name = n;
damage = d;
cout <<"the monster is ready for the Battle " << endl;
}
~monster(){
cout <<"the monster is dead and earesd from the RAM " << endl;
}
void show_power(){
  cout <<"the monster: " << name << endl;
  cout <<"the power: " << damage << endl;
}
};
int main(){
  monster monster1("zombi",100);
monster1.show_power();
return 0;
}
