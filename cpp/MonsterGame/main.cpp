#include <iostream>
#include <string>
#include <string_view>

struct Monster {
  enum Type {
    noType,
    ogre,
    dragon,
    orc,
    spider,
    slime,
  };
  std::string name{"No name"};
  Type type{};
  int health{};
};

std::string_view monsterEnumToString(Monster::Type Type) {
  if (Type == Monster::ogre)
    return "ogre";
  if (Type == Monster::dragon)
    return "dragon";
  if (Type == Monster::orc)
    return "orc";
  if (Type == Monster::spider)
    return "spider";
  if (Type == Monster::slime)
    return "slime";
  return "No Type";
}

std::ostream &operator<<(std::ostream &out, Monster::Type Type) {
  out << monsterEnumToString(Type);
  return out;
}

void printMonster(Monster &Monster) {
  std::cout << "Monster's name: " << Monster.name << '\n';
  std::cout << "Monster's type: " << Monster.type << '\n';
  std::cout << "Monster's health: " << Monster.health << "\n\n";
  return;
}

int main() {
  Monster ogre{"Torg", Monster::ogre, 145};
  Monster slime{"Blob", Monster::slime, 23};
  printMonster(ogre);
  printMonster(slime);
  return 0;
}
