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

Commencez par créer un dossier du nom de votre projet sur votre disque.

`C:/Users/AD/"NewFile"`

On peut aussi le crée en commande : 

   + `cd /Users/AD`
   + `mkdir NewFile`
   + `cd NewFile`

Ensuite, initialisez un dépôt Git tout neuf dans ce dossier avec la commande :
   + `git init`

_**Cloner un dépôt existant**_

   +  `git clone http://github.com/Tolier83/"DepotExistant".git`
   +   La commande `git status` vous indique les fichiers que vous avez modifiés récemment 
         + Vous pouvez voir concrètement ce que vous avez changé en tapant `git diff`
