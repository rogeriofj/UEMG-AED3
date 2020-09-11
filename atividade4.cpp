#include <iostream>
#include <list>

using namespace std;

class jogador{
  private:
    string nome, posicao;
    int numero;
  public:
    jogador(){
    }
    jogador(string n, string p, int nu){
      nome = n;
      posicao = p;
      numero = nu;
    }

    //sobrecarga operador ==
    bool operator == (const jogador& p) const {
      return nome == p.nome;
    }

    void imprimir(){
      cout << nome << " - " << posicao << " - " << numero << endl;
    }
};

class equipe{
  private:
    list<jogador> jogadores;
    string nome;
    string naciolidade;
    int ano;
  public:
    equipe(){
      nome = "";
      naciolidade = "";
      ano = 0;
    }
    equipe(string n, string na, int a){
      nome = n;
      naciolidade = na;
      ano = a;
    }

void insereEquipe(){

      string nomeEquipe, nacionalidadeEquipe;
      int anoEquipe;
      cout << "Digite o nome do time a ser adicionado: ";
      cin >> nomeEquipe;
      cout << "Digite a nacionalidade do time: ";
      cin >> nacionalidadeEquipe;
      cout << "Digite o ano do time: ";
      cin >> anoEquipe;
      equipe temp(nomeEquipe, nacionalidadeEquipe, anoEquipe);
    }

    void removeEquipe(){
      string n;
      cout << "Digite o nome do time a ser removido:";
      cin >> n;
      equipe temp(n, "", 0);
    }

    //sobrecarga operador ==
    bool operator == (const equipe& p) const {
      return nome == p.nome;
    }

    void insereJogador(){
      string nomeJogador, posicaoJogador;
      int numeroJogador;
      cout << "Digite o nome do jogador: ";
      cin >> nomeJogador;
      cout << "Digite a posição do jogador: ";
      cin >> posicaoJogador;
      cout << "Digite o número do jogador: ";
      cin >> numeroJogador;
      jogador temp(nomeJogador, posicaoJogador, numeroJogador);
      jogadores.push_back(temp);
      cout << "\nJogador inserido com sucesso\n";
    }

    void imprimirEquipe(){
      cout << "Equipe: " << nome;
      cout << "\nJogadores da equipe:\n";
      for(auto item : jogadores){
        item.imprimir();
      }
    }
    void removeJogador(){
      string n;
      cout << "Digite o nome do jogador a ser removido:";
      cin >> n;
      jogador temp(n, "", 0);
     jogadores.remove(temp);
     cout << "Jogador removido com sucesso!";
   }

};

void excluirJogador(list<equipe> &lista){
  cout << "De qual time deseja remover um jogador? ";
  string e;
  cin >> e;
  equipe temp(e, "", 0);
  for(auto &item : lista){
    if(item == temp){
     item.removeJogador();
   }
  }
}
void cadastroJogador(list<equipe> &lista){
  cout << "Em qual time deseja adicionar um jogador? ";
  string e;
  cin >> e;
  equipe temp(e, "", 0);
  for(auto &item : lista){
    if(item == temp){
     item.insereJogador();
   }
  }
}

void imprimirTime(list<equipe> &lista){
    for(auto &item : lista){
            item.imprimirEquipe();
        }
}

int main() {
int op;
op = 6;
list<equipe> torneio;

do{
system("cls");
cout << "ATIVIDADE 4 - TORNEIO - ENTREGA 13/09/2020\n";
cout << "Selecione a opção que deseja:\n";
cout << "1-- Adicionar time no torneio;\n";
cout << "2-- Remover time do torneio;\n";
cout << "3-- Adicionar jogador ao time;\n";
cout << "4-- Remover jogador do time;\n";
cout << "5-- Imprimir os times com seus respectivos jogadores;\n";
cout << "0-- Encerrar o programa.\n";
cin >> op;

switch(op){
case 0:
    {
        break;
    }
case 1:
    {
        string nomeEquipe, nacionalidadeEquipe;
      int anoEquipe;
      cout << "Digite o nome do time a ser adicionado: ";
      cin >> nomeEquipe;
      cout << "Digite a nacionalidade do time: ";
      cin >> nacionalidadeEquipe;
      cout << "Digite o ano do time: ";
      cin >> anoEquipe;
      equipe temp(nomeEquipe, nacionalidadeEquipe, anoEquipe);
        torneio.push_back(temp);
        cout << "Time cadastrado com sucesso!";
        break;
    }
case 2:
    {
    string n;
      cout << "Digite o nome do time a ser removido:";
      cin >> n;
      equipe temp(n, "", 0);
        torneio.remove(temp);
        cout << "Time removido com sucesso!";
        break;
    }
case 3:
    {
        cadastroJogador(torneio);
        break;
    }
case 4:
    {
        excluirJogador(torneio);
        break;
    }
case 5:
    {
        imprimirTime(torneio);
        break;
    }

default: cout << "Opção não encontrada!";
break;
}
system("pause");
}while(op!=0);
}

