# Validador de CPF em C

Este projeto consiste em um programa simples e eficiente desenvolvido na linguagem **C** para realizar a validação matemática de números de CPF (Cadastro de Pessoa Física).

---

### Autor
- **João Vitor Colla de Souza**
- **Data:** 15 de maio de 2026

---

##  Como Utilizar

O código foi projetado para ser testado de forma rápida e direta no próprio código-fonte. Para validar um CPF, siga estes passos:

1. Abra o arquivo de código no seu editor ou IDE de preferência.
2. Vá até a **linha 08**.
3. Insira os 11 dígitos do CPF que você deseja testar, separando cada número por uma vírgula (`,`). 

**Exemplo de preenchimento:**
```c
// Insira o CPF na linha 08 neste formato:
int cpf[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};
```

Após inserir o número, basta compilar e executar o código para que o programa calcule os dígitos verificadores e informe se o CPF é válido ou inválido.
