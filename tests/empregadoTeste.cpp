#ifndef _EMPREGADO_TESTE_
#define _EMPREGADO_TESTE_

// include com a biblioteca
#include <gtest/gtest.h>

// lista de includes com o codigo do trabalho que o teste vai usar
#include "../src/empregado.cpp"

TEST(EmpregadoTestGroup, ConstrutorTest) {

	Empregado empregado1 = Empregado(2, "Chubiscleudson", 88, "26/02/2000", "07/03/2017", "012.345.678-99", 103);
}

TEST(EmpregadoTestGroup, SetterGetterTest) {

	Empregado empregado1 = Empregado(3, "Elfuego", 88, "26/02/2000", "07/03/2017", "012.345.678-99", 103);

	EXPECT_EQ(3, empregado1.getId());
	EXPECT_EQ("Elfuego", empregado1.getNome());
	EXPECT_EQ(88, empregado1.getIdade());
	EXPECT_EQ("26/02/2000", empregado1.getDataNascimento());
	EXPECT_EQ("07/03/2017", empregado1.getDataAdmissao());
	EXPECT_EQ("012.345.678-99", empregado1.getCPF());
	EXPECT_EQ(103, empregado1.getSalario());

	empregado1.setNome("2");
	empregado1.setIdade(3);
	empregado1.setDataNascimento("4");
	empregado1.setDataAdmissao("5");
	empregado1.setCPF("6");
	empregado1.setSalario(7);

	EXPECT_EQ("2", empregado1.getNome());
	EXPECT_EQ(3, empregado1.getIdade());
	EXPECT_EQ("4", empregado1.getDataNascimento());
	EXPECT_EQ("5", empregado1.getDataAdmissao());
	EXPECT_EQ("6", empregado1.getCPF());
	EXPECT_EQ(7, empregado1.getSalario());
}

#endif /* _EMPREGADO_TESTE_ */
