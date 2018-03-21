# Commande Git-bash

_**Configurer son .gitconfig**_

+ `git config --global color.diff auto`
+ `git config --global color.status auto`
+ `git config --global color.branch auto`
+ `git config --global user.name "My Name"`
+ `git config --global user.email "My Mail"`
+ `git config --global alias.ci commit`
+ `git config --global alias.co checkout`
+ `git config --global alias.st status`
+ `git config --global alias.br branch`

_**Voir son .gitconfig**_

+ `vim ~/.gitconfig`

> commande de modification une fois dans le gitconfig :

   +   `a` pour mettre en insertion et pouvoir ecrire.
   +   `:qu!` pour sauvegarder et quitter.
   +   `:x` pour aussi sauvegarder et quitter.

## Créer un nouveau dépôt ou cloner un dépôt existant

_**Créer un nouveau dépôt**_

> Commencez par créer un dossier du nom de votre projet sur votre disque.

`C:/Users/AD/"NewFile"`

> On peut aussi le crée en commande : 

   + `cd /Users/AD`
   + `mkdir NewFile`
   + `cd NewFile`

> Ensuite, initialisez un dépôt Git tout neuf dans ce dossier avec la commande :
   + `git init`

_**Cloner un dépôt existant**_

   +  `git clone http://github.com/Tolier83/"DepotExistant".git`
   +   La commande `git status` vous indique les fichiers que vous avez modifiés récemment 
         + Vous pouvez voir concrètement ce que vous avez changé en tapant `git diff`
         
_**Effectuer un commit des changements**_  

   + faire `git add nomfichier1 nomfichier2` pour ajouter les fichiers à la liste de ceux devant faire l’objet d’un commit.
   + faire `git commit nomfichier1 nomfichier2` pour indiquer lors du commit quels fichiers précis doivent être « commités ».
   + faire `git commit -a` pour « commiter » tous les fichiers qui étaient listés dans `git status`(qu’ils soient en vert ou en rouge).
   
> Faire appel à `git add` est indispensable lorsque vous venez de créer de nouveaux fichiers que Git ne connaît pas encore. Cela lui permet de les prendre en compte pour le prochain commit.
   
   + Lorsque vous avez effectué un commit, vous devriez donc le voir dans `git log` :
   + Utilisez l’option -p pour avoir le détail des lignes qui ont été ajoutées et retirées dans chaque commit, en tapant `git log -p`
   + Vous pouvez avoir un résumé plus court des commits avec `git log --stat`
   
## Annuler un commit effectué par erreur

_**Corriger une erreur**_  

> Modifier le dernier message de commit

   + `git commit --amend` L’éditeur de texte s’ouvrira à nouveau pour changer le message.

> Annuler le dernier commit (soft)

   + `git reset HEAD^` Cela annule le dernier commit et revient à l’avant-dernier.

> Pour indiquer à quel commit on souhaite revenir, il existe plusieurs notations :

   + `HEAD` : dernier commit ;
   + `HEAD^` : avant-dernier commit ;
   + `HEAD^^` : avant-avant-dernier commit ;
   + `HEAD~2` : avant-avant-dernier commit (notation équivalente) ;
   + `d6d98923868578a7f38dea79833b56d0326fcba1` : indique un numéro de commit précis ;
   + `d6d9892` : (notation équivalente à la précédente, bien souvent écrire les premiers chiffres est suffisant tant qu’aucun autre commit ne commence par les mêmes chiffres).

> Seul le commit est retiré de Git ; vos fichiers, eux, restent modifiés.

_**Annuler les modifications d’un fichier avant un commit**_

Si vous avez modifié plusieurs fichiers mais que vous n’avez pas encore envoyé le commit et que vous voulez restaurer un fichier tel qu’il était au dernier commit, utilisez `git checkout`

   + `git checkout nomfichier`

_**Annuler/Supprimer un fichier avant un commit**_

Supposons que vous veniez d’ajouter un fichier à Git avec `git add` et que vous vous apprêtiez à le « commiter ». Cependant, vous vous rendez compte que ce fichier est une mauvaise idée et vous voudriez annuler votre `git add`.

Il est possible de retirer un fichier qui avait été ajouté pour être « commité » en procédant comme suit :
   + `git reset HEAD -- "fichier_a_supprimer"`


