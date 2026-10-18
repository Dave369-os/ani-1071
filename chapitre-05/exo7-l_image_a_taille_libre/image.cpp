#include <cstdio>

char* creerImage(int l, int h);
void detruireImage(char *img);
void point(char *img, int l, int h, int x, int y, char c);
void afficher(const char *img, int l, int h);
void dessiner(char *img, int l, int h);



int main(){
    int l = 80, h = 24;
    char *img = creerImage(l, h);
    dessiner(img, l, h);
    afficher(img, l, h);
    detruireImage(img);

    return 0;
}



char* creerImage(int l, int h){
    char *image = new char [l * h];
    for(int i = 0; i < l * h; i++){
        image[i] = ' ';
    }
    return image;
}

void detruireImage(char* img){
    delete [] img;
}

void point(char *img, int l, int h, int x, int y, char c){
    if(x > 0 && x < l && y > 0 && y < h){
        img[y * l + x] = c;
    }
}

void afficher(const char *img, int l, int h){
    for(int y = 0; y < h; y++){
        for(int x = 0; x < l; x++){
            printf("%c", img[y * l + x]);
        }
        printf("\n");
    }
}

void dessiner(char *img, int l, int h){
    int cx = l / 2, cy = h / 2, r = h / 2 - 1;
    
    for(int y = 0; y < h; y++){
        for(int x = 0; x < l; x++){
            int dx = x - cx;
            int dy = y - cy;
            if(dx * dx + dy * dy <= r * r)
                point(img, l, h, x, y, '#');
        }
    }
}