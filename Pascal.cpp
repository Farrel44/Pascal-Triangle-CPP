#include <iostream>

class Fact {
    public:
    int Faktor(int faktor) {
        int result = 1;
        for (int i = 2; i <= faktor; i++){
            result *= i;
        }
        return result;
    }
};

int main(){
    Fact faktor;
    int n = 10;
    for(int i = 0; i <= n - 1; i++){
        int koef = 1;
        for(int k = n - i; k > 0; k--){
            std::cout << " ";
        }
        for(int j = 0; j <= i; j++){
            koef = faktor.Faktor(i) / (faktor.Faktor(i - j) * faktor.Faktor(j));
            std::cout << koef << " ";
        }
        std::cout << std::endl;
    }
}
