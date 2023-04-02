# Projet get_next_line

Le projet get_next_line est un projet de l'école 42 qui consiste à recoder une fonction permettant de lire ligne par ligne un fichier ou l'entrée standard.

## Fonctionnalités disponibles

La fonction `get_next_line` permet de lire et de retourner la ligne suivante depuis un fichier ou l'entrée standard. Les fonctionnalités disponibles incluent :

- Gestion de plusieurs descripteurs de fichier en même temps pour la version bonus
- Libération correcte de toutes les ressources allouées

## Utilisation

Pour utiliser la fonction `get_next_line` dans votre projet, vous devez inclure le fichier header `get_next_line.h` ainsi que les fichiers sources. Ensuite, vous pouvez utiliser la fonction `get_next_line` pour lire les fichiers ligne par ligne.

`char get_next_line(int fd);`

La fonction get_next_line retourne :

* Une chaîne de caractère si une ligne a été lue avec succès
* NULL si la fin du fichier a été atteinte
* NULL en cas d'erreur

La variable fd correspond au descripteur de fichier pour lequel on souhaite lire une ligne.

La fonction get_next_line alloue la mémoire nécessaire pour stocker la ligne lue. Il est donc nécessaire de libérer cette mémoire une fois que vous avez fini d'utiliser la ligne.

