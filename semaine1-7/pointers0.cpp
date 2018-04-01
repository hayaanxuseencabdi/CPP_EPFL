#include <bits/stdc++.h>

/*
Un pointeur est une variable qui contient l'adresse d'un autre objet.
Une variable de variable en somme.
Basically, a variable which stores the address of another var. 
The pointer is an object of its own however.
*/
int main() {
    // Déclarer un pointeur (et un entier)
    int *ptr, x(3);
    // Affecter un pointeur
    ptr = &x;
    // Alloeur/allocate un pointeur
    // Instantiate an int whose value is 123 and subsequently 
    // return that value's address.
    int *ptr_two = new int(123);
    std::cout << *ptr_two << std::endl;
    // Libérer un pointeur (libérer l'adresse pointée par le pointeur)
    // Free the "address" on the stack or heap and allow it to be used by
    // something else again. The adress will still be there however, so
    // making the pointer's adress = NULL is a good idea.
    delete ptr_two;
    // Only delete what you "new" a.k.a. objects that you dynamically allocate
    // 
    ptr_two = NULL;
    // std::cout << ptr_two << " " << *ptr_two << std::endl;

    // int pointer to a dynamically allocated "zone"
    int *nouveau_ptr(new int(33));
    int** ptr_to_int_ptr = &nouveau_ptr;

    std::cout << &ptr_to_int_ptr << " " << " " << *ptr_to_int_ptr << " " << **ptr_to_int_ptr << std::endl;

    // *&i va pointer vers la valeur de la variable i, donc
    // effectivement *&i = i
    int i(5);
    std::cout << *&i << std::endl;

    return 0;
}

/*
Passing by reference vs by pointer:
Back in C, you could only pass by reference.
You should want to by reference whenever you can, unless you want to reassign
the passed in pointer.
E.g. making a new head of a linkedlist (if the return type of that
non-static function was void).
*/