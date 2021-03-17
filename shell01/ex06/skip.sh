#awk NR permet d'imprimer le numero de ligne donc %2==0 permet d'avoir les nombres pairs en commencant à 0
ls -l | awk "NR%2==0"

