#include <bits/stdc++.h>

/*
Une référence est un autre nom pour on object qui existe déjà en mémoire.
Par exemple: 
int val = 1;
int &x = val;
x va être une référence

Une référence doit aussi être initialisée (vers un objet existant)
Elle ne peut être liée qu'à un suel objet, c'est la raison que si tu veux
référencer plusiers d'objets avec la même référence, un pointeur est mieux
However, the following block of code would compile and be a legitimate expression:
int i;
int &ri(i)
int j(2);

ri = j; This statement would give the variable that both ri and i point 
        to, the value of 2 (j's value). 
        [i = j;]
*/

/*
void f(int &a)
On faisait un passage par référence, si donc quelque part plus tard dans le 
programme, on avait déclaré:
int b(3);
f(b);
On passe l'entier par référence.
*/

/*
Un piège des références et le mot-clé 'const':
int i(3);
const int &j(i);
En ce cas, on peut pas changer la valeur de j, parce que c'est const, mais
on le peut faire par changer la valeur de i. Apres ça, i & j ont la même nouvelle valeur.
*/

/*
3eme spécificité des références:
On ne peut pas référencer une référence, elle n'est pas un objet en mémoire.
int i(3);
int &ri(i);
int &rri(ri);   Marche pas
int &&rri(ri)   Marche aussi pas
This means we can't make an array of references.
Although type && is invalid, it does exist in C++11 however it doesn't
mean a reference of a reference. It's an rvalue reference.
*/

int main() {
    int i(3);
    const int &j(i);
    // Essayer changer la valeur d'un const référence nous donne, cette erreur:
    // error: assignment of read-only reference ‘j’
    // j = 4;
    i = 4;
    // Ça affiche "4"
    std::cout << j << std::endl;
    return 0;
}