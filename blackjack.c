#include "stdio.h"
#include "stdlib.h"
typedef struct card{
	const char name;
	int count;
}card;
card deck[52] = {
	{'🃑',1},
	{'🃒',1},
	{'🃓',1},
	{'🃔',1},
	{'🃕',1},
	{'🃖',1},
	{'🃗',1},
	{'🃘',1},
	{'🃙',1},
	{'🃚',1},
	{'🃛',1},
	{'🃝',1},
	{'🃞',1},
	{'🂡',1},
	{'🂢',1},
	{'🂣',1},
	{'🂤',1},
	{'🂥',1},
	{'🂦',1},
	{'🂧',1},
	{'🂨',1},
	{'🂩',1},
	{'🂪',1},
	{'🂫',1},
	{'🂭',1},
	{'🂮',1},
	{'🂱',1},
	{'🂲',1},
	{'🂳',1},
	{'🂴',1},
	{'🂵',1},
	{'🂶',1},
	{'🂷',1},
	{'🂸',1},
	{'🂹',1},
	{'🂺',1},
	{'🂻',1},
	{'🂽',1},
	{'🂾',1},
	{'🃁',1},
	{'🃂',1},
	{'🃃',1},
	{'🃄',1},
	{'🃅',1},
	{'🃆',1},
	{'🃇',1},
	{'🃈',1},
	{'🃉',1},
	{'🃊',1},
	{'🃋',1},
	{'🃍',1},
	{'🃎',1},
};
card hand[12];
int pullRandomCard(int seed){
	srand((unsigned) (&seed));
	return rand() % 52;
}
void addCardToHand(){

}
int main(int argc, char *argv[]){
	int selection;
	// scanf("%i",&selection);
	// printf(" %s \n",deck[selection]);
	printf(" %s \n",deck[pullRandomCard(1)]);

	return 0;
}
