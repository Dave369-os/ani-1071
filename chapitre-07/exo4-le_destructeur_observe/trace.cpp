#include <cstdio>

class Trace{
    public : 
    const char *nom;
    Trace(const char *n){nom = n; printf("%s nait\n", nom);}
    ~Trace(){printf("%s meurt\n", nom);}
};

void ma_fonction(){
    Trace f("fonction");
    printf("fin fonction");
}

int main(){

    Trace m("main");

    {
        Trace b1("bloc");
        printf("fin bloc 1\n");
    }

    Trace *n = new Trace("sans_delete");

    Trace *nd = new Trace("avec_delete");
    delete nd;
    printf("fin pointeurs\n");

    {
        Trace b2("deuxieme_bloc1");
        Trace b3("deuxieme_bloc2");
        printf("fin bloc 2\n");
    }

    ma_fonction();

    printf("fin main\n");
    //m.~Trace();

    return 0;
}