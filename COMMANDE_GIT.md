# Commande Git-bash

_**Configurer son .gitconfig**_

+ git config --global color.diff auto
+ git config --global color.status auto
+ git config --global color.branch auto
+ git config --global user.name "My Name"
+ git config --global user.email "My Mail"
+ git config --global alias.ci commit
+ git config --global alias.co checkout
+ git config --global alias.st status
+ git config --global alias.br branch

_**Voir son .gitconfig**_

+ vim ~/.gitconfig 

> commande de modification une fois dans le gitconfig :

   +   `a` pour mettre en insertion et pouvoir ecrire.
   +   `:qu!` pour sauvegarder et quitter.
   +   `:x` pour aussi sauvegarder et quitter.

## Créer un nouveau dépôt ou cloner un dépôt existant

Commencez par créer un dossier du nom de votre projet sur votre disque.

`C:/Users/AD/"NewFile"`

On peut aussi le crée en commande : 

   + cd /home/mateo21
   + mkdir plusoumoins
   + cd plusoumoins
