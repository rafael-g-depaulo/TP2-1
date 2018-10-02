#include "Classes.h"






int main()
{
    Empresa NovaEmpresa;
    //O programa comeca inicializando todos os funcionarios
    //Inicializa se a Empresa que usaremos

    //INICIALIZACAO DOS EMPREGADOS DE FINANCA -----------------------------------------------------------------------------------------------------------------
    //Tres Auxiliares
    Auxiliar Func1("Jefferson","12","20/12/2006","0000010","1","20/11/2002",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    Auxiliar Func2("Roberto","16","20/12/2002","0000020","2","20/11/2002",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    Auxiliar Func3("Pepe","18","20/12/2000","0000030","3","20/11/2002",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    //Sao colocados na database de auxiliares do setor deles
    NovaEmpresa.financas.Auxiliares.push_back(Func1);
    NovaEmpresa.financas.Auxiliares.push_back(Func2);
    NovaEmpresa.financas.Auxiliares.push_back(Func3);
    //Tres Tecnicos
    Tecnico  Tec1("Aline","20","05/02/1998","0000100","4","01/04/2006",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    Tecnico  Tec2("Bob","30","06/08/1988","0000200","5","09/06/1994",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    Tecnico  Tec3("David","40","01/02/1978","0000300","6","14/05/1982",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3());
    //Sao colocados na database de tecnicos do setor deles
    NovaEmpresa.financas.Tecnicos.push_back(Tec1);
    NovaEmpresa.financas.Tecnicos.push_back(Tec2);
    NovaEmpresa.financas.Tecnicos.push_back(Tec3);
    //Seis Profissionais
    Profissional Prof1("Ranna","23","06/01/1995","123456","7","12/02/2003",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"economista","Profissional",6500);
    Profissional Prof2("Abigail","23","06/01/1995","123457","8","02/04/2002",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"administrador","Profissional",6500);
    Profissional Prof3("Addam","40","04/04/1978","123458","9","15/02/2001",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"contador","Profissional",6500);
    Profissional Prof4("Adela","38","06/01/1980","223456","10","02/07/1998",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"contador","Profissional",6500);
    Profissional Prof5("Marcos","41","06/01/1977","223451","11","23/08/2004",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"economista","Profissional",6500);
    Profissional Prof6("Fernanda","53","06/01/1965","233451","12","26/01/1992",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"contador","Profissional",6500);
    //Sao colocados na database de Profissionais do setor deles
    NovaEmpresa.financas.Profissionais.push_back(Prof1);
    NovaEmpresa.financas.Profissionais.push_back(Prof2);
    NovaEmpresa.financas.Profissionais.push_back(Prof3);
    NovaEmpresa.financas.Profissionais.push_back(Prof4);
    NovaEmpresa.financas.Profissionais.push_back(Prof5);
    NovaEmpresa.financas.Profissionais.push_back(Prof6);
    //Um Diretor de Setor
    DiretordeSetor Dir1("Pablo","48","07/01/1970","100003","13","11/06/2005",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"economista","Diretor de Setor",9500);
    //O diretor eh colocado na database do setor dele
    NovaEmpresa.financas.Diretor.push_back(Dir1);
    //Dois diretores de Operacoes
    DiretordeOperacoes DirOp1("Samson","58","08/01/1960","002004","14","13/02/2007",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"advocado","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    DiretordeOperacoes DirOp2("Carlos","58","05/29/1960","003004","15","13/02/2007",NovaEmpresa.financas.getTitulo(),NovaEmpresa.financas.getprofissao1(),NovaEmpresa.financas.getprofissao2(),NovaEmpresa.financas.getprofissao3(),"eng. da computacao","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    //Sao inseridos na database da empresa
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp1);
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp2);


    //INICIALIZACAO DOS EMPREGADOS DE MARKETING -----------------------------------------------------------------------------------------------------
    //Tres Auxiliares
    Auxiliar Func4("Julieta","12","23/12/2006","0000010","16","20/11/2002",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    Auxiliar Func5("Maria","16","20/02/2002","0000020","17","20/11/2002",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    Auxiliar Func6("Gabriel","18","21/12/2000","0000030","18","20/11/2002",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    //Sao colocados na database de auxiliares do setor deles
    NovaEmpresa.marketing.Auxiliares.push_back(Func4);
    NovaEmpresa.marketing.Auxiliares.push_back(Func5);
    NovaEmpresa.marketing.Auxiliares.push_back(Func6);
    //Tres Tecnicos
    Tecnico  Tec4("Lizalda","20","05/12/1998","0000100","19","01/04/2006",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    Tecnico  Tec5("Lilian","30","02/08/1988","0000200","20","09/06/1994",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    Tecnico  Tec6("Alexandre","40","06/02/1978","0000300","21","14/05/1982",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3());
    //Sao colocados na database de tecnicos do setor deles
    NovaEmpresa.marketing.Tecnicos.push_back(Tec4);
    NovaEmpresa.marketing.Tecnicos.push_back(Tec5);
    NovaEmpresa.marketing.Tecnicos.push_back(Tec6);
    //Cinco Profissionais
    Profissional Prof7("Vivian","23","06/07/1995","123456","22","12/02/2003",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"administrador","Profissional",6500);
    Profissional Prof8("Beto","23","06/08/1995","123457","23","02/04/2002",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"administrador","Profissional",6500);
    Profissional Prof9("Andre","40","04/05/1978","123458","24","15/02/2001",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"mercadologo","Profissional",6500);
    Profissional Prof10("Carmen","38","06/02/1980","223456","25","02/07/1998",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"mercadologo","Profissional",6500);
    Profissional Prof11("Francisco","41","04/01/1977","223451","26","23/08/2004",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"comunicador social","Profissional",6500);
    //Sao colocados na database de Profissionais do setor deles
    NovaEmpresa.marketing.Profissionais.push_back(Prof7);
    NovaEmpresa.marketing.Profissionais.push_back(Prof8);
    NovaEmpresa.marketing.Profissionais.push_back(Prof9);
    NovaEmpresa.marketing.Profissionais.push_back(Prof10);
    NovaEmpresa.marketing.Profissionais.push_back(Prof11);
    //Um Diretor de Setor
    DiretordeSetor Dir2("Pedro","48","01/01/1970","100003","27","11/06/2005",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"mercadologo","Diretor de Setor",9500);
    //O diretor eh colocado na database do setor dele
    NovaEmpresa.marketing.Diretor.push_back(Dir2);
    //Dois diretores de Operacoes
    DiretordeOperacoes DirOp3("Joao","58","02/01/1960","002004","28","13/02/2007",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"eng. da computacao","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    DiretordeOperacoes DirOp4("Adalberto","58","30/10/1960","003004","29","13/02/2007",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"eng. social","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    //Sao inseridos na database da empresa
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp3);
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp4);
    //O Diretor Executivo
    DiretordeExecutivo DirEX("Joe","68","30/01/1950","000005","0","18/01/1972",NovaEmpresa.marketing.getTitulo(),NovaEmpresa.marketing.getprofissao1(),NovaEmpresa.marketing.getprofissao2(),NovaEmpresa.marketing.getprofissao3(),"contador","Diretor Executivo",18000,NovaEmpresa.Profissoes);
    //Colocado na database
    NovaEmpresa.DiretorExecutivo.push_back(DirEX);


     //INICIALIZACAO DOS EMPREGADOS DE TECNOLOGIA -----------------------------------------------------------------------------------------------------
    //Tres Auxiliares
    Auxiliar Func7("Priscila","12","20/12/2006","0000010","30","20/11/2002",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    Auxiliar Func8("Joaquin","16","20/12/2002","0000020","31","20/11/2002",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    Auxiliar Func9("Leorio","18","20/12/2000","0000030","32","20/11/2002",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    //Sao colocados na database de auxiliares do setor deles
    NovaEmpresa.tecnologia.Auxiliares.push_back(Func7);
    NovaEmpresa.tecnologia.Auxiliares.push_back(Func8);
    NovaEmpresa.tecnologia.Auxiliares.push_back(Func9);
    //Tres Tecnicos
    Tecnico  Tec7("Lucas","20","05/02/1998","0000100","33","01/04/2006",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    Tecnico  Tec8("Hugo","30","06/08/1988","0000200","34","09/06/1994",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    Tecnico  Tec9("Luciana","40","01/02/1978","0000300","35","14/05/1982",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3());
    //Sao colocados na database de tecnicos do setor deles
    NovaEmpresa.tecnologia.Tecnicos.push_back(Tec7);
    NovaEmpresa.tecnologia.Tecnicos.push_back(Tec8);
    NovaEmpresa.tecnologia.Tecnicos.push_back(Tec9);
    //Cinco Profissionais
    Profissional Prof12("Lucio","23","06/01/1995","123456","36","12/02/2003",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da computacao","Profissional",6500);
    Profissional Prof13("Irina","23","06/01/1995","123457","37","02/04/2002",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. de sistemas","Profissional",6500);
    Profissional Prof14("Ronaldo","40","04/04/1978","123458","38","15/02/2001",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da computacao","Profissional",6500);
    Profissional Prof15("Messi","38","06/01/1980","223456","39","02/07/1998",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da informacao","Profissional",6500);
    Profissional Prof16("Mary","41","06/01/1977","223451","40","23/08/2004",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da computacao","Profissional",6500);
    Profissional Prof17("Amelia","41","06/01/1977","223451","41","23/08/2004",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. de sistemas","Profissional",6500);
    //Sao colocados na database de Profissionais do setor deles
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof12);
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof13);
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof14);
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof15);
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof16);
    NovaEmpresa.tecnologia.Profissionais.push_back(Prof17);
    //Um Diretor de Setor
    DiretordeSetor Dir3("Monique","48","07/01/1970","100003","42","11/06/2005",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. de sistemas","Diretor de Setor",9500);
    //O diretor eh colocado na database do setor dele
    NovaEmpresa.tecnologia.Diretor.push_back(Dir3);
    //Dois diretores de Operacoes
    DiretordeOperacoes DirOp5("Tales","58","08/01/1960","002004","43","13/02/2007",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da informacao","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    DiretordeOperacoes DirOp6("Juvenal","58","05/29/1960","003004","44","13/02/2007",NovaEmpresa.tecnologia.getTitulo(),NovaEmpresa.tecnologia.getprofissao1(),NovaEmpresa.tecnologia.getprofissao2(),NovaEmpresa.tecnologia.getprofissao3(),"eng. da computacao","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    //Sao inseridos na database da empresa
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp5);
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp6);



    //INICIALIZACAO DOS EMPREGADOS DE NORMATIVIDADE -----------------------------------------------------------------------------------------------------
    //Tres Auxiliares
    Auxiliar Func10("Elvira","12","20/12/2006","0000010","45","20/11/2002",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    Auxiliar Func11("Luciano","16","20/12/2002","0000020","46","20/11/2002",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    Auxiliar Func12("Reginaldo","18","20/12/2000","0000030","47","20/11/2002",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    //Sao colocados na database de auxiliares do setor deles
    NovaEmpresa.normatividade.Auxiliares.push_back(Func10);
    NovaEmpresa.normatividade.Auxiliares.push_back(Func11);
    NovaEmpresa.normatividade.Auxiliares.push_back(Func12);
    //Tres Tecnicos
    Tecnico  Tec10("Regina","20","05/02/1998","0000100","48","01/04/2006",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    Tecnico  Tec11("Derreck","30","06/08/1988","0000200","49","09/06/1994",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    Tecnico  Tec12("Mark","40","01/02/1978","0000300","50","14/05/1982",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3());
    //Sao colocados na database de tecnicos do setor deles
    NovaEmpresa.normatividade.Tecnicos.push_back(Tec10);
    NovaEmpresa.normatividade.Tecnicos.push_back(Tec11);
    NovaEmpresa.normatividade.Tecnicos.push_back(Tec12);
    //Cinco Profissionais
    Profissional Prof18("Alfredo","23","06/01/1995","123456","51","12/02/2003",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"comunicador social","Profissional",6500);
    Profissional Prof19("Roberto","23","06/01/1995","123457","52","02/04/2002",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"advocado","Profissional",6500);
    Profissional Prof20("Juliane","40","04/04/1978","123458","53","15/02/2001",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"contador","Profissional",6500);
    Profissional Prof21("Wanda","38","06/01/1980","223456","54","02/07/1998",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"advocado","Profissional",6500);
    Profissional Prof22("Cleiton","41","06/01/1977","223451","55","23/08/2004",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"comunicador social","Profissional",6500);
    Profissional Prof23("Havanna","41","06/01/1977","223451","56","23/08/2004",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"comunicador social","Profissional",6500);
    //Sao colocados na database de Profissionais do setor deles
    NovaEmpresa.normatividade.Profissionais.push_back(Prof18);
    NovaEmpresa.normatividade.Profissionais.push_back(Prof19);
    NovaEmpresa.normatividade.Profissionais.push_back(Prof20);
    NovaEmpresa.normatividade.Profissionais.push_back(Prof21);
    NovaEmpresa.normatividade.Profissionais.push_back(Prof22);
    NovaEmpresa.normatividade.Profissionais.push_back(Prof23);
    //Um Diretor de Setor
    DiretordeSetor Dir4("Teostolo","48","07/01/1970","100003","57","11/06/2005",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"contador","Diretor de Setor",9500);
    //O diretor eh colocado na database do setor dele
    NovaEmpresa.normatividade.Diretor.push_back(Dir4);
    //Dois diretores de Operacoes
    DiretordeOperacoes DirOp7("Thiago","58","08/01/1960","002004","58","13/02/2007",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"advocado","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    DiretordeOperacoes DirOp8("Luiza","58","05/29/1960","003004","59","13/02/2007",NovaEmpresa.normatividade.getTitulo(),NovaEmpresa.normatividade.getprofissao1(),NovaEmpresa.normatividade.getprofissao2(),NovaEmpresa.normatividade.getprofissao3(),"eng. social","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    //Sao inseridos na database da empresa
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp7);
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp8);
    //O Diretor Executivo



    //INICIALIZACAO DOS EMPREGADOS DE DESIGN -----------------------------------------------------------------------------------------------------
    //Tres Auxiliares
    Auxiliar Func13("Jose","12","20/12/2006","0000010","60","20/11/2002",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    Auxiliar Func14("Zumira","16","20/12/2002","0000020","61","20/11/2002",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    Auxiliar Func15("Giovanna","18","20/12/2000","0000030","62","20/11/2002",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    //Sao colocados na database de auxiliares do setor deles
    NovaEmpresa.design.Auxiliares.push_back(Func13);
    NovaEmpresa.design.Auxiliares.push_back(Func14);
    NovaEmpresa.design.Auxiliares.push_back(Func15);
    //Tres Tecnicos
    Tecnico  Tec13("Claudio","20","05/02/1998","0000100","63","01/04/2006",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    Tecnico  Tec14("Miguel","30","06/08/1988","0000200","64","09/06/1994",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    Tecnico  Tec15("Rita","40","01/02/1978","0000300","65","14/05/1982",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3());
    //Sao colocados na database de tecnicos do setor deles
    NovaEmpresa.design.Tecnicos.push_back(Tec13);
    NovaEmpresa.design.Tecnicos.push_back(Tec14);
    NovaEmpresa.design.Tecnicos.push_back(Tec15);
    //Cinco Profissionais
    Profissional Prof24("Emanuel","23","06/01/1995","123456","66","12/02/2003",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design grafico","Profissional",6500);
    Profissional Prof25("Manuela","23","06/01/1995","123457","67","02/04/2002",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design multimedia","Profissional",6500);
    Profissional Prof26("Diego","40","04/04/1978","123458","68","15/02/2001",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design grafico","Profissional",6500);
    Profissional Prof27("Douglas","38","06/01/1980","223456","69","02/07/1998",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design multimedia","Profissional",6500);
    Profissional Prof28("Iago","41","06/01/1977","223451","70","23/08/2004",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design grafico","Profissional",6500);
    Profissional Prof29("Julia","41","06/01/1977","223451","71","23/08/2004",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"eng. social","Profissional",6500);
    //Sao colocados na database de Profissionais do setor deles
    NovaEmpresa.design.Profissionais.push_back(Prof24);
    NovaEmpresa.design.Profissionais.push_back(Prof25);
    NovaEmpresa.design.Profissionais.push_back(Prof26);
    NovaEmpresa.design.Profissionais.push_back(Prof27);
    NovaEmpresa.design.Profissionais.push_back(Prof28);
    NovaEmpresa.design.Profissionais.push_back(Prof29);
    //Um Diretor de Setor
    DiretordeSetor Dir5("Rafael","48","07/01/1970","100003","72","11/06/2005",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"design multimedia","Diretor de Setor",9500);
    //O diretor eh colocado na database do setor dele
    NovaEmpresa.design.Diretor.push_back(Dir5);
    //Dois diretores de Operacoes
    DiretordeOperacoes DirOp9("Yero","58","08/01/1960","002004","73","13/02/2007",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"eng. da computacao","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    DiretordeOperacoes DirOp10("Ana Maria","58","05/29/1960","003004","74","13/02/2007",NovaEmpresa.design.getTitulo(),NovaEmpresa.design.getprofissao1(),NovaEmpresa.design.getprofissao2(),NovaEmpresa.design.getprofissao3(),"contador","Diretor de Operacoes",13000,NovaEmpresa.Profissoes);
    //Sao inseridos na database da empresa
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp9);
    NovaEmpresa.DiretoresdeOperacao.push_back(DirOp10);

    NovaEmpresa.CalcularPorcentagem();
    return 0;
}
