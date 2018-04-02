#include <bits/stdc++.h>



int main(int argc, char *argv[]) {
    // Allouer de la mémoire
    /*
    Allocation statique, elle s'appelle statique parce qu'on n'a pas besoin 
    d'attendre l'exécution du programme pour connaître le besoin en mémoire.
    Statically allocated variables are destroyed as soon as they go out of scope.
    */
    int v;
    /*
    Allocation dynamique --> resizing arrays aka vectors.
    Size isn't known at compilation, we'll know the memory needs at runtime.
    */
    /*
    Each call to new need to be matched by exactly one call to delete.
    new et delete permettant d'allouer et de libérer dynamiquement de la mémoire.
    */
    int *ptr = new int;
    *ptr = 3;
    std::cout << *ptr << std::endl;
    delete ptr;
    // Next line is considered the best practice, once we deleted a ptr
    // we shouldn't continue to access it. Setting it to a nullptr gives us
    // a seg fault if we try to, until it's reassigned.
    ptr = nullptr;
    std::cout << *ptr << std::endl;

    int *px;
    // int *px = new int;
    // Declaration and initialisation of the pointer like so, would prevent 
    // a segmentation fault.

    // The following statement would cause a segmentation fault.
    // Accessing or modifying an address that hasn't been reserved
    // results in a segmentation fault.
    *px = 20;
    // std::cout << px << std::endl;    This line never gets executed.


    /*
    Best practice:
    Initialisez toujours vos pointeurs. Utilisez 'nullptr' si qu'on sait pas
    encore la mémoire pointée au moment de l'initialisation.
    This lets us check whether or not the pointer genuinely points to anything
    ptr != nullptr
    in case we need to.
    */
    return 0;
}