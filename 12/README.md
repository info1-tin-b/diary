# Semaine 12/16

- [ ] Git
- [ ] https://git-scm.com/book/fr/v2
- [ ] https://git-scm.com/docs

## C'est quoi Git

Un système qui permet:

- Faire une tracabilité des changements sur des fichiers.
- Une sauvegarde par snapshots
- Communiquer entre des développeurs 
- Partager des fichiers
- Gestion de version décentralisée

## C'est quoi un hash

C'est une fonction mathématique qui transforme une donnée en une donnée 
généralement plus courte. Il n'existe aucune méthode ou algorithme qui permet
de retrouver la donnée d'origine. 

Un bon hash est un hash qui minimise le nombre de collisions. 

## Les commandes Git

- `git init` Crée un référentiel vide (un dossier `.git`)
- `git add <fichier/dossier>` Ajoute au référentiel le ou les fichiers
- `git status` Affiche le status du référentiel (ce qui a été modifié)
- `git commit -m "message"` Crée un nouveau commit dans le référentiel à la suite des commits existants
- `git push` Envoyer les modifications sur GitHub
- `git merge` et `git rebase` Qui permet de fusionner des modifications
  
- `git clone` Qui est une méta-commande (git init; git remote add; git pull)
- `git pull` c'est une méta commande (git fetch; git merge)

## Fonctionnement de Git


1. Fichier `foo.txt` qui contient `Les sablés au pommes`.
2. Fichier `bar.txt` qui contient `Les trains CFF sont toujours à l'heure`.
3. Je calcul le hash du contenu du fichier `foo.txt`: `c631c04`
4. Je calcul le hash du contenu du fichier `bar.txt`: `5846215`
5. Je crée un fichier que j'appelle `tree`

   ```txt
   c631c04 foo.txt
   5846215 bar.txt
   ```
6. Je calcul le hash de `tree`: `d8bb809c01e`
7. Je crée un nouveau fichier que j'appelle un `commit`

    ```txt
    commit 
    2023-12-11T14:07 Yves Chevallier <yves.chevallier@heig-vd.ch>
    J'ai ajouté deux fichiers
    d8bb809c01e
    ```
8. Je calcul le hash de ce fichier: `f6ee88dd9de7fe`

9. Si je veux un nouveau commit

    ```txt
    commit 
    2023-12-11T14:11 Yves Chevallier <yves.chevallier@heig-vd.ch>
    Je modifie foo
    56371cabe0
    parent f6ee88dd9de7fe
    ```




