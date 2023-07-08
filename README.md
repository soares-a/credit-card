# Cartões de Crédito

Este programa em C verifica a validade de números de cartões de crédito. Ele utiliza o algoritmo de Luhn para validar a soma de verificação dos números.

## Requisitos

- CS50 Library

## Compilação

$ gcc -o credit credit.c -lcs50


## Uso

Execute o programa compilado e insira o número do cartão de crédito quando solicitado. O programa irá verificar se o número é válido e exibirá a marca do cartão ou "INVALID" se for inválido.

  $ ./credit
  Number: 4003600000000014
  VISA


## Algoritmo de Luhn

O algoritmo de Luhn é um método matemático simples para verificar a validade dos números de cartões de crédito. Ele funciona multiplicando e somando os dígitos do número de acordo com um padrão específico. Se a soma total for um múltiplo de 10, o número é considerado válido.

## Limitações

Este programa suporta números de cartões American Express (15 dígitos), MasterCard (16 dígitos) e Visa (13 e 16 dígitos). Outros formatos de cartões não são suportados.

## Contribuição

Sinta-se à vontade para contribuir com melhorias, correções de bugs ou novas funcionalidades. Basta abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [MIT License](https://opensource.org/licenses/MIT).
