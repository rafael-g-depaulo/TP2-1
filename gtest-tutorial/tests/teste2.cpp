#ifndef _TEST_2_
#define _TEST_2_

#include <gtest/gtest.h>

#include "../src/codigoDoTrabalho.cpp"
#include "../src/codigoDoTrabalho2.cpp"

TEST(NomeDoGrupoDeTestes2, TiposDeAssert) {

    ASSERT_TRUE(foo4() == 4);   // assert 'true'
    ASSERT_FALSE(foo4() > 4);   // assert 'false'

    ASSERT_EQ(4, foo4());       // assert '=='
    ASSERT_NE(5, foo4());       // assert '!='
    ASSERT_LT(3, foo4());       // assert '<'
    ASSERT_LE(4, foo4());       // assert '<='
    ASSERT_GT(5, foo4());       // assert '>'
    ASSERT_GE(4, foo4());       // assert '>='


    ASSERT_STREQ("str", "str");     // assert '==' para 'c strings' (char* ou char[] que terminam em '\0')
    ASSERT_STRNE("str", "Str");     // assert '!=' para 'c strings'

    ASSERT_STRCASEEQ("str", "Str"); // assert '==' para 'c strings', ignorando maiuscula/minuscula
    ASSERT_STRCASENE("str", "aaa"); // assert '!=' para 'c strings', ignorando maiuscula/minuscula
}


// mesma coisa de assert, mas com expect. (veja test1.cpp para ver a diferença entre ASSERT e EXPECT)
TEST(NomeDoGrupoDeTestes2, TiposDeExpect) {

    EXPECT_TRUE(foo4() == 4);   // expect 'true'
    EXPECT_FALSE(foo4() > 4);   // expect 'false'

    EXPECT_EQ(4, foo4());       // expect '=='
    EXPECT_NE(5, foo4());       // expect '!='
    EXPECT_LT(3, foo4());       // assert '<'
    EXPECT_LE(4, foo4());       // assert '<='
    EXPECT_GT(5, foo4());       // assert '>'
    EXPECT_GE(4, foo4());       // assert '>='


    EXPECT_STREQ("str", "str");     // assert '==' para 'c strings' (char* ou char[] que terminam em '\0')
    EXPECT_STRNE("str", "Str");     // assert '!=' para 'c strings'

    EXPECT_STRCASEEQ("str", "Str"); // assert '==' para 'c strings', ignorando maiuscula/minuscula
    EXPECT_STRCASENE("str", "aaa"); // assert '!=' para 'c strings', ignorando maiuscula/minuscula
}

#endif /* _TEST_2_ */