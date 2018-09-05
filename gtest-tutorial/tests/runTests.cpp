// esse arquivo é o "main" dos testes. é só incluir os testes que você
// criar na lista de #include abaixo

// (NÃO MUDAR) essas 2 linhas + a linha final garantem que
// não haja erro de incluir o arquivo mais de uma vez
// (tem que fazer isso com todo arquivo .cpp)
#ifndef _TEST_CODIGO_DO_TRABALHO_
#define _TEST_CODIGO_DO_TRABALHO_

// (NÃO MUDAR) incluir a biblioteca de testes
#include <gtest/gtest.h>

// incluir os testes aqui
#include "teste1.cpp"
#include "teste2.cpp"

// (NÃO MUDAR) executa os testes
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// (NÃO MUDAR) essa linha + 2 linhas iniciais garantem que
// não haja erro de incluir o arquivo mais de uma vez
// (tem que fazer isso com todo arquivo .cpp)
#endif /*_TEST_CODIGO_DO_TRABALHO_*/