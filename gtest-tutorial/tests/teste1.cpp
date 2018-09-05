#ifndef _TEST_1_
#define _TEST_1_

// include com a biblioteca
#include <gtest/gtest.h>

// lista de includes com o codigo do trabalho que o teste vai usar
#include "../src/codigoDoTrabalho.cpp"

TEST(NomeDoGrupoDeTestes1, NomeDoTeste1) {
    EXPECT_EQ(4, foo4());   // use EXPECT quando quizer testar um erro normal
                            // (i.e. se vc quer que os testes continuem mesmo se
                            // aparecer um erro aqui)
}

TEST(NomeDoGrupoDeTestes1, NomeDoTeste2) {
    ASSERT_EQ(0, 0);        // use ASSERT quando quizer testar um erro critico
                            // (i.e. se der um erro aqui nem vale a pena fazer
                            //  os outros testes)
}

#endif /* _TEST_1_ */
