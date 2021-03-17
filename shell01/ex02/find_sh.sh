#-exec pour executer une commande apres le find
#basename permet d'enlever tout les /
#basename -s permet de preciser une partie a enlever
find . -iname "*.sh" -exec basename -s ".sh" {} +

