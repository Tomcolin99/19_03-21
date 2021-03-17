#grep -v permet d'inverser la selection et de prendre le reste
FT_LINE1=5
FT_LINE2=10

cat /etc/passwd | grep -v '^#' | sed 's/:.*//' | awk "NR%2==0" | rev | sort | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" |  sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./' | tr -d '\n' | sed $a | cat -e
