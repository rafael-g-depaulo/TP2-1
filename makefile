### Makefile ###
# por: Luthiery C. Cavalcante
# original por: Rafael G. de Paulo


# variaveis
FLAGS  			= -std=c++11 -Wall -g -Wsign-compare
SRC_DIR1		= EmpresaUm/src
SRC_DIR2		= EmpresaDois/src
OBJ					= $(wildcard *.o)

# all
all: Auxiliar1 Auxiliar2 DiretordeExecutivo1 DiretordeExecutivo2 DiretordeOperacoes1 DiretordeOperacoes2 DiretordeSetor1 DiretordeSetor2 Empregado1 Empregado2 Empresa1 Empresa2 Profissional1 Profissional2 Setor1 Setor2 Tecnico1 Tecnico2 TransferirEmpregado clean

# .o's
TransferirEmpregado: transefirEmpregado.cpp
	g++ $(FLAGS) -c transefirEmpregado.cpp

Auxiliar1: $(SRC_DIR1)/Auxiliar1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Auxiliar1.cpp
Auxiliar2: $(SRC_DIR2)/Auxiliar2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Auxiliar2.cpp
	
DiretordeExecutivo1: $(SRC_DIR1)/DiretordeExecutivo1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/DiretordeExecutivo1.cpp
DiretordeExecutivo2: $(SRC_DIR2)/DiretordeExecutivo2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/DiretordeExecutivo2.cpp
	
DiretordeOperacoes1: $(SRC_DIR1)/DiretordeOperacoes1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/DiretordeOperacoes1.cpp
DiretordeOperacoes2: $(SRC_DIR2)/DiretordeOperacoes2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/DiretordeOperacoes2.cpp
	
DiretordeSetor1: $(SRC_DIR1)/DiretordeSetor1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/DiretordeSetor1.cpp
DiretordeSetor2: $(SRC_DIR2)/DiretordeSetor2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/DiretordeSetor2.cpp
	
Empregado1: $(SRC_DIR1)/Empregado1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Empregado1.cpp
Empregado2: $(SRC_DIR2)/Empregado2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Empregado2.cpp
	
Empresa1: $(SRC_DIR1)/Empresa1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Empresa1.cpp
Empresa2: $(SRC_DIR2)/Empresa2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Empresa2.cpp
	
Profissional1: $(SRC_DIR1)/Profissional1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Profissional1.cpp
Profissional2: $(SRC_DIR2)/Profissional2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Profissional2.cpp
	
Setor1: $(SRC_DIR1)/Setor1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Setor1.cpp
Setor2: $(SRC_DIR2)/Setor2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Setor2.cpp
	
Tecnico1: $(SRC_DIR1)/Tecnico1.cpp
	g++ $(FLAGS) -c $(SRC_DIR1)/Tecnico1.cpp
Tecnico2: $(SRC_DIR2)/Tecnico2.cpp
	g++ $(FLAGS) -c $(SRC_DIR2)/Tecnico2.cpp

clean:
	rm *.o
