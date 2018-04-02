#include <bits/stdc++.h>


// Smart pointers are deleted when they go out of scope.

int main(int argc, char *argv[]) {
    /*
    unique_ptr
        Each memory address can have a maximum of 1 unique_ptr pointing to it.
        Hence the name unique.
        Les unique_ptr ne peuvent pas être copiés.
            Use cases:
        Imagine two pointers, p1 and p2, point to the same address.
        You subsequently "delete p2;". p1 still points to the now unusable address.
        Thus unique_ptr comes in handy if we know that we won't need more than 
        a single pointer pointing to the same adress.
    */
    std::unique_ptr<int> p(new int(3));
    auto q = std::make_unique<int>(6);
    std::cout << *p << " " << *q << std::endl;
    // Vector of unique_ptrs
    std::vector<std::unique_ptr<std::string>> names;
    names.push_back(std::unique_ptr<std::string>(new std::string("Pierre")));
    names.push_back(std::unique_ptr<std::string>(new std::string("Paul")));
    // Freeing unique_ptrs, ca remet en plus les pointeurs q et p à nullptr
    // Useful if you want to free a smart pointer before the garbage collector does so.
    q.reset();
    p.reset();
    /*
    shared_ptr
        Zone mémoire partagée par plusieurs endroits du code (sans qu'aucune ne sache
        quand elle n'est plus utile aux autres)
    */
    /*
    weak_ptr
        Presque comme un shared_ptr, mais peut avoir été détruit par ailleurs. (C'est-a-dire
        qu'on n'est pas compté dans les utilisateurs de cette zone mémoire).
        Utile pour casser les cycles de shared_ptr.
    */ 
    return 0;
}