#include <stdio.h>
struct Client {
  char nom[50];
  char prenom[50];
  int age;
};

int main() {
  struct Client client1  = {"Léo", "GUIGUE", 2005};
  struct Client client2  = {"Bruno", "GUIGUE", 1972};
  struct Client client3  = {"Anthony", "GUIGUE", 2003};

  printf("%s %s %d\n", client1.nom, client1.prenom, client1.age);
  printf("%s %s %d\n", client2.nom, client2.prenom, client2.age);
  printf("%s %s %d\n", client3.nom, client3.prenom, client3.age);

  return 0;
}