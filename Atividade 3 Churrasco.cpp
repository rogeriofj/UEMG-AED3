#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	string sexo;
	int idade;
	string bebe;
	celula * proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n, string s, int a, string b)
	{
		nome = n;
		sexo = s;
		idade = a;
		bebe = b;
	}

	celula(string n, string s, int a, string b, celula *p){
		nome = n;
        sexo = s;
		idade = a;
		bebe = b;
		proxima = p;
	}

	string getNome()
	{
		return nome;
	}
	void setNome(string n)
	{
		nome = n;
	}
		int getIdade()
	{
		return idade;
	}
	void setIdade(int a)
	{
		idade = a;
	}
		string getSexo()
	{
		return sexo;
	}
	void setSexo(string s)
	{
		sexo = s;
	}
		string getBebe()
	{
		return bebe;
	}
	void setBebe(string b)
	{
		bebe = b;
	}

	celula * getProxima()
	{
		return proxima;
	}

	void setProxima(celula * l)
	{
		proxima = l;
	}
};


class lista
{
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	lista(celula *i)
	{
		inicio = i;
	}
	//~lista()
	//{
		//esvaziar();
		//cout << "\nPassou no metodo destrutor";
	//}
	celula * getInicio()
	{
		return inicio;
	}

	void setInicio(celula *i)
	{
		inicio = i;
	}

	void inserirInicio(string n, string s, int a, string b)
	{
		celula *nova = new celula;
		nova->setNome(n);
		nova->setSexo(s);
		nova->setIdade(a);
		nova->setBebe(b);
		nova->setProxima(inicio);
		inicio = nova;
	}

	void inserirFim(string n, string s, int a, string b)
	{
		celula *nova = new celula(n, s, a, b, NULL);
		//nova->setNome(n);
		//nova->setProxima(NULL);
		if(inicio == NULL)
		{
			inicio = nova;
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			aux->setProxima(nova);
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			while(aux != NULL)
			{
				cout << aux->getNome() << endl;
				cout << aux->getSexo() << endl;
				cout << aux->getIdade() << endl;
				cout << aux->getBebe() << endl;
				aux = aux->getProxima();
			}
		}
	}

	//void esvaziar()
	//{
		//celula *aux = inicio;
		//while(aux != NULL)
		//{
			// = inicio->getProxima();
			//delete aux;
			//aux = inicio;
		//}
		//cout << "\nLista esvaziada com sucesso.";
	//}


};

int main()
{
	lista listaChurras;
	listaChurras.inserirInicio("Miguel", "Masculino", 19, "Bebe cerveja");
	listaChurras.inserirFim("Ana", "Feminino", 22, "Bebe vinho");
	listaChurras.inserirFim("Vinicius", "Masculino", 18, "Não bebe");
	listaChurras.imprimir();
	return 0;
}
