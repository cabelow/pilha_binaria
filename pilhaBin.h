typedef struct No no;

typedef struct pilha PilhaBin;

PilhaBin * criaPilha();

no * criaNo(int valor);

void add(PilhaBin *p, int valor);

void divBin(int num, PilhaBin *p);
