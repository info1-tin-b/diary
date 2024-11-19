# Semaine 09/16

- [ ] Générateur congruentiel
- [ ] Parcours des arguments (ordre multiple)
- [ ] Opérateur ternaire
- [ ] Sources en début, commentaire de fonctions
- [ ] Jamais de else-if après un return

## Code Review

```c
if (argc > 3) {
    fprintf(stderr,"Erreur: Trop d'arguments!\n");
    exit(3);
}
```

```c
if (argc == 2) {
    if (strcmp("--help", argv[1]) == 0) {
        printf("\nUsage : tire [OPTION_1] [OPTION_2]");
        printf(
            "\nBienvenue dans l'aide, tapez un code de pneu sous forme "
            "Pxxx/xxRxx, par exemple P225/55R15, puis tapez une distance "
            "exprimée en km");
        printf(
            "\nTapez \"--version\" pour connaître la version et le "
            "créateur\n\n");
        return 0;
    } else if (strcmp("--version", argv[1]) == 0) {
        printf(
            "\nVersion : 1.0.0\nAuteur : Cristopher Anazco\nAdresse "
            "e-mail: cristopher.anazcotorres@heig-vd.ch\n\n");
        return 0;
    }
}
```

```c
printf("┌───────────────┬"); REPEAT("─", max_width + 8); printf("┐\n");
printf("│ Diameter\t│ %*.2f cm │\n", max_width + 3, wheel_diameter_cm);
printf("│ Perimeter\t│ %*.2f m  │\n", max_width + 3, wheel_perimeter_m);
printf("│ Revs/km\t│ %*.1f     │\n", max_width + 2, revs_per_km);

if (argc == 3) {
    printf("├───────────────┼"); REPEAT("─", max_width + 8); printf("┤\n");
    printf("│ Revolutions\t│ %*.2f    │\n", max_width + 3, nb_of_revs);
}
```
