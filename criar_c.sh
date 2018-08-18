#!/bin/bash

echo "Transformar executaveis"
#read -p "Digite a pasta que você quer entrar: " pasta
#cd /
#cd $pasta
p="$(pwd)"
echo "Você esta em $p"
read -p "Digite o nome do arquio .c que quer compilar: " arqC
read -p "Digite um nome para ele agora: " arq
cria="$(gcc -o $arq $arqC)"

echo "Executando..."
SPIN="AGUARDE"
for((i=0;i<${#SPIN};i++))
do
echo -ne "${SPIN:$i:1}"
sleep 0.3
done
echo -e "\n"

./$arq

