/**
 * Soit deux agents secrets James Bond et Yoko Suno qui veulent communiquer 
 * de manière sécurisée. Ils n'utilisent pas le chiffrement de César car 
 * il est un trop simple, ils préfère utiliser le chiffrement de Vigenère.
 * 
 * Le chiffrement de Vigenère utilise une clé (un mot) pour chiffrer 
 * un message. Chaque lettre du message est décalée dans l'alphabet 
 * en fonction de la lettre correspondante de la clé.
 * 
 * Exemple: vigenere_encrypt("HELLO", "KEY") -> "RIJVS"
 * A décale de 0, Z de 25
 * Z décalé de 1 donne A
 */

// aaaa     a    -->  aaaa
// aaaa     abcd --> abcd
// bbbb     abcd --> bcde
// bbbbbbbb abcd --> bcdebcde
// z        b    --> a

void vigenere_encrypt(char *s, const char *key) {

}

int main(int argc, char *argv[]) {
    char message[] = "PAS DE PATATES A MIDI";
    viginere_encrypt(message, "CRIQUETDETALUS");
    printf("%s\n", message);
}