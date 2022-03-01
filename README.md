# push_swap

ressource et liens utiles pour ce projet:
le sujet:
https://drive.google.com/file/d/1_qoq-5A9gNSuHuFiNcq-jgAi9aObPW2Y/view?usp=sharing

le tuto avecla methode radix:
[https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)

generateur de suite de nombre non triées;
[https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)

principe du sujet:
- Nous avons deux piles d’entier et un ensemble d’instruction pour manipuler les piles. le but est d’afficher sur la sortie standard la liste d’instruction à faire pour permettre le tri.

objectifs:
- aborder la notion de complexité. les algorithmes de tri font partis des choses qu’on peut nous demander en entretient d’embauche.
- trier les valeurs le plus vite possible.

consignes général:
- excecutable = makefile
- libft doit posséder son propre makefile
- variable globale interdite (toute variable initialisé à l’exterieur d’une fonction, main compris)
- gérer les erreurs sans jamais qu’il y ait de segfault
- fonction autorisées : write, read, malloc, free, exit

règle du jeu:
- a ne doit pas avoir de doublon
- b est vide
- a doit etre trier dans l’ordre croissant
- en cas d’erreur “Error\n”
- tout les chiffres doivent être des int et peuvent aussi être négatifs

sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. Ne fait
rien s’il n’y en a qu’un ou aucun.
sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. Ne fait
rien s’il n’y en a qu’un ou aucun.
ss : sa et sb en même temps.
pa : push a - prend le premier élément au sommet de b et le met sur a. Ne fait
rien si b est vide.
pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait
rien si a est vide.
ra : rotate a - décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.
rb : rotate b - décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.
rr : ra et rb en même temps.
rra : reverse rotate a - décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.
rrb : reverse rotate b - décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.
rrr : rra et rrb en même temps.

sur l’analyse de la complexité des algorithmes:
c’est l’étude de la quantité de ressoucre (temps et espace) necessaire à l’exécution d’un programme. cette étude permet d’optimiser en comparant les solutions. mais attention elle doit etre comparé dans des cas de figure different car une certaine configuration peut favoriser un algorithme peu optimisé alors que le répetition de l’experience  demontrera l’efficacité du meilleur algorithme.

quelques notions:
log base 2 (logarithme binaire) 


introduction:
pour réaliser ce projet nus allons faire appel à l’algo raddix sort qui est un algo de tri facile à implementer et stable mais possible à optimiser ! c’est très bien de connaitre un algo comme ça pour pouvoir de réutiliser dans le futur.

les étapes

1. parsing put numbers in stack A if no error (couter cb y a til d’élements) 
2. verifier que ce n’est pas déjà trié
3. appeler sort_small_stack() si moins de 5 eleme
4. appeler sort_big_stack()
5. assigner une nouvelle valeur à chaque chiffre de [0, N) (raddix ne marche qu’avec les positifs).
    
    6.trier les nombres en seulement 2 stacks et pas 10 en utilisant le decalage binaire
