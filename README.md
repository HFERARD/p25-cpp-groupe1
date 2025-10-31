# p25-cpp-groupe1


## Séance 1 : 28/10/25

On installe les outils nécessaires en open source pour faire tourner c++ : compilateur ```g++```et WSL. 
<br>
### Commandes utiles : 
```g++ nom.cpp [-o nom_fichier_compile]```: crée un fichié à compiler par la suite. Par défaut on obtient ```a.out```


### Structure de base d'un programme en C++

#### Stucture la plus simple

```cpp
# include <iostream>
int main {} 
```

La précommande ```#include <iostream>``` indique que l'on va utiliser l'interface in/out. Rien n'est inclu de manière standard lorsqu'on utilise C++.

#### Structure "complète"

On rajoute les éléments pour obtenir un programme "Hello World" avec tous les éléments (si l'on veut passer des arguments)

```cpp
#include <iostream>

int main(int argc, char *argv []) {
    std::cout << "Hello World";
}
```

#### Fonctions 

```cpp
int add(int a, int b, int c){
    return a+b+c ;
}
``` 

#### Boucles while 
```cpp
#include <iostream>

int main(int argc, char *argv []) {
    while (i < argc):
    {
        std::cout << i ;
    }
}
```

#### Boucles for

```cpp
#include <iostream>

int main(int argc, char *argv []) {
    for (int i=0; i < argc; i++)
    {
        std::cout << argv[i] << '\n'; 
    }

}```








