# Sirine BRADAI
## Réalisation des TP

### Level 1 - fini ✅  <br/>
✅ Install a compiler  <br/>
✅ Use an IDE  <br/>
✅ Use Git  <br/>
✅ Use a debugger  <br/> 
✅ Use a formatting tool  <br/>
✅ Naming  <br/>
✅ Stack vs Heap  <br/>
✅ Consistency in style  <br/>
#### Notes :
- Utilisation de Clion (extensions pour debugger, formating tool (Ctrl+Alt+Shift+L), static analysers compris)
- Use git -> Utilisation de GitKraken
- Consistency in style -> CamelCase prefered

### Level 2 - fini ✅
✅ Make it work, then make it good <br/>
✅ Prefer free functions <br/>
✅ Design cohesive classes <br/>
✅ Use structs to group data <br/>
✅ Write small functions <br/>
✅ DRY: Don't repeat yourself <br/>
✅ Enums <br/>
✅ Split problems in small pieces <br/>
✅ Composition over Inheritance <br/>
#### Notes :
- Différence entre une struct et une class : une classe devrait faie plus qu'avoir juste des getters et setters (ca c'est plutot une struct). 
- Utiliser des free functions dès que possible. Garder une class concise (même idée véhiculée)
- Méthodes publiques = pour accès à membres privés ⚠️ sinon utilisation free functions
- Struct = pour grouper données (point 2D cord y, x)
- Faire des fonctions courtes (autant que possible)
- Moyens d'éviter les répétitions : boucles, fonctions, template, struct, class, macro??bof
- Enum class mieux que enum car plus explicite 
- Diviser pour mieux régner ⚠️
- Héritage seulement si vraiment nécessaire (à remplacer par fonctions ou composition si possible)

### Level 3 - ❌
✅ std::vector <br/>
✅ Documentation <br/>
✅ Use libraries <br/>
✅ assert <br/>
✅ auto <br/>
❌ Testing <br/>
❌ Type design <br/>
❌ Dependencies <br/>
❌ Lambda functions <br/>
❌ Master your IDE <br/>
[...] <br/>
#### Notes :
- std::vecotr meilleur conteneur (rapidité)
- documenting : key points : décrire l'utilisation des fonctions quand nécessaire pas forcément automatique + donner des exemples
- doxygen = website documentation mais pas beau possibilité de compléter avec sphinx
- possibilité de faire un readme pour documenter chaque folder (= un module)
- build from source -> utiliser un git submodule
- ajouter les librairies dans le cmake
- lire la documentation pour gagner du tps
- assert = debugging tool pour les fonctions, pas de consomation, pendant runtime vs static assert pendant compilation
- auto pour remplacer le nom de type long
- 

## Avancement des TP - en cours 🔃
✅ Guess the number <br/>
✅ Hangman <br/>
✅ Adding a menu <br/>
🔃 Noughts and Crosses <br/>
🔃 Connect 4 <br/>
🔃 Adding tests <br/>
🔃 An AI for Hangman <br/>

