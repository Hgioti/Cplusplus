#include <iostream>
#include "header.h"

string function(int flag,int i)
{
		string post_title[]={"Problhma me deiktes","Den katalabainw","Emfwleumenes klaseis","Sxetika me constructor","Paratash 14 hmerwn","Paratash","Aporia sxetika me const","Sxetika me extern const int","Dynamic Array","Crashare o compiler","Egkatastash python","Programmatisteikes askhseis","Linux upologistes","Ergasthria","Askhsh java bonus","Inline","Static kai stash"};
	
		string	post_context[]={"Den katalavainw pws akribws prepei na ftia3oume th lista","8a mporousame na kanoume frontisthrio c++","Pws kaloume constructor se emfwleumenh klash","Den mporw na perasw orismata ston array constructor","Mia paratash 8a htan oti prepei","Sumfwnw gia mia mikrh paratash","Den mporw na xrhsimopoihsw const gia global metablhth","Xrhsipomoihse extern const int","Eftia3a ena dynamic array alla de douleuei","Egrapsa gcc -oi kai crashare","Apo pou egka8istoume python?","8a exoume askhseis me algori8mous?","oi upologistes tis sxolhs de leitourgoun","Pote arxizoun ta ergasthria c++?","Kata poso beltiwnei to ba8mo h 4h askhsh?","Giati na xrhsimopoihsei kaneis inline?","Mporei kapoios na pei ti egine se ekeino to ma8hma?"};
		string post_kanones="Odhgies kai kwdikas h8ikhs";
		
		if(flag==0)
			return post_title[i];
		else if(flag==2)
			return post_context[i];
		else if(flag==3)
			return post_kanones;
}
