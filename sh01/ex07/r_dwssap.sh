#cat /etc/passwd | grep -v "#" | sed -s '1~2 p' | sort --reverse | cut -d ':' -f1 | tr '\n' ', '
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd |
grep -v "#" |
sed -s '1~2 p' |
cut -d ':' -f1 |
rev |
sort --reverse |
sed -n "${FT_LINE1},${FT_LINE2}p" |
tr '\n' ',' |
sed 's/,$/./'
