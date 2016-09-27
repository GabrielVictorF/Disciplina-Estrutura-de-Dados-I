#define TAM 40		// Tamanho das strings a serem usadas
#define TSTRUCT 3	// Tamanho das posições da struct
typedef struct games
{
	char nome[TAM];
	char tipo[TAM];
	int ano, download;
	float nota;
}Game;

void cria_games(Game *p, char nome[TAM], char tipo[TAM], int ano, int download, float nota);
void mostra_games(Game *p);
void ordena_rating_crescente (Game *p);
void exibe_rating_crescente (Game *p);
void rating_decrescente (Game *p);
void exibe_rating_decrescente(Game *p);
void ordena_tipo (Game *p, char tipo[TAM]);
void ordena_ano_x (Game *p, float nota);
void ordena_ano_crescente (Game *p);
void ordena_ano_decrescente(Game *p);


