#include <cstdio>

class Image{ 
    private :
    int   largeur, hauteur;
    char* pixels;

    public : 
    Image(int l, int h) : largeur(l), hauteur(h), pixels(new char[l * h]){
        vivantes++; effacer();
    }
    void effacer(char c = ' ') { for (int i = 0; i < largeur * hauteur; i++) pixels[i] = c; }
    void point(int x, int y, char c = '#'){
        if (x < 0 || x >= largeur || y < 0 || y >= hauteur) return;
        pixels[y * largeur + x] = c;
    }
    void afficher() const {for(int i = 0; i < hauteur; i++){for(int j = 0; j < largeur; j++){printf("%c", pixels[i * largeur + j]); } printf("\n"); }; }
    int l() const {return largeur;}
    int h() const {return hauteur;}

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
    
    // Image()  { vivantes++; }
    // ~Image() { vivantes--; }
    static int vivantes;

    Image(const Image&) = delete;             // pas de copie
    Image& operator=(const Image&) = delete;  // pas d'affectation
    ~Image() {vivantes--; delete[] pixels; }
};

int Image::vivantes = 0;

int main(){
    printf("Avant la boucle, images vivantes = %d\n\n", Image::vivantes);
    for(int i = 0; i < 10; i++){
        Image image(20, 10);
        image.segment(0, 0, 19, 9);
        printf("tour %d, images vivantes = %d\n", i + 1, Image::vivantes);
    }
    printf("\n");
    printf("Apres la boucle, images vivantes = %d\n", Image::vivantes);

    Image a(20, 19);
    a.segment(0, 0, 19, 9, '/');
    a.segment(0, 9, 19, 0, '\\');
    a.afficher();

    Image a = b;

    return 0; 
}