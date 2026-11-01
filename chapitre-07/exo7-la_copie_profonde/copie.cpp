#include <cstdio>

struct Image{
    int   largeur, hauteur;
    char* pixels;
    static int vivantes;

    Image(int l, int h) : largeur(l), hauteur(h), pixels(new char[l * h]){
        effacer();
        vivantes++;
    }
    Image(const Image& autre) : largeur(autre.largeur), hauteur(autre.hauteur), pixels(new char[autre.largeur * autre.hauteur]){
        vivantes++;
        for(int i = 0; i < largeur * hauteur; i++){pixels[i] = autre.pixels[i];}
    }
    ~Image() { delete[] pixels; vivantes--;}
    Image& operator=(const Image& autre){
        //if(this == &autre) return *this;
        delete[] pixels;
        largeur = autre.largeur;
        hauteur = autre.hauteur;
        pixels = new char[largeur * hauteur];
        for(int i = 0; i < largeur * hauteur; i++) pixels[i] = autre.pixels[i];
        return *this;
    }
    
    void effacer(char c = ' ') { for (int i = 0; i < largeur * hauteur; i++) pixels[i] = c; }
    void point(int x, int y, char c = '#'){
        if (x < 0 || x >= largeur || y < 0 || y >= hauteur) return;
        pixels[y * largeur + x] = c;
    }

    void afficher()const {for(int i = 0; i < hauteur; i++){for(int j = 0; j < largeur; j++){printf("%c", pixels[i * largeur + j]);} printf("\n");}}
    double lerp(double a, double b, double t){
    return a + (b - a) * t;
    }

void segment(double x0, double y0, double x1, double y1, char c = '#'){
    int pas = 60;
    for (int i = 0; i <= pas; i++){
        double t = i / (double) pas;
        point((int) (lerp(x0, x1, t) + 0.5), (int) (lerp(y0, y1, t) + 0.5), c);
        }
    }
};
int Image :: vivantes = 0;

int main(){

//     printf("Debut : %d vivantes\n", Image::vivantes);{
//     Image a(20, 10);
//     a.effacer();
//     a.segment(0, 0, 19, 9, '#');
//     printf("apres creation de a : %d vivantes\n", Image::vivantes);

//     Image b = a;
//     b.point(0, 0, 'B');
//     b.point(19, 0, 'B');
//     printf("------a------\n");
//     a.afficher();
//     printf("------b------\n");
//     b.afficher();
//     printf("apres creation de b : %d vivantes\n", Image::vivantes);


//     Image c(5, 5);
//     c = a;
//     c.point(10, 5, 'C');
//     a.afficher();
//     printf("apres creation de c : %d vivantes\n", Image::vivantes);

// }

   // printf("apres bloc : %d vivantes\n", Image::vivantes);

    //Exprerience
    Image a(20, 10);
    a.effacer();
    a.segment(0, 0, 19, 9, '#');
    printf("sans le test : \n");
    printf("adresse avant a = a : %p\n", (void*)a.pixels);
    a = a;
    printf("adresse apres : %p\n", (void*)a.pixels);
    printf("image apres : \n");
    a.afficher();

    return 0;
}