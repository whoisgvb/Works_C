#!/bin/bash

echo "Mapeando todos os arquivos C"
SPIN="AGUARDE"
for((i=0;i<${#SPIN};i++))
do
echo -ne "${SPIN:$i:1}"
sleep 0.3
done
echo -e "\n"
repetir="1"
listartodos="$(expr `ls *.c | wc -l` + 1)"
while [ "$repetir != "$listartodos" ]; do
nome=$( ls *.c | head -n$repeat | tail -n1 )
novoNome=$( ls $nome | head -n$repetir | tail -n1 | sed 's/.c//g' )
repetir=$( expr $repetir + 1 )
done
