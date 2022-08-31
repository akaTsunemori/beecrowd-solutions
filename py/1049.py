animal = [input(), input(), input()]

allTypes = [
    ['vertebrado', 'ave', 'carnivoro'], 
    ['vertebrado', 'ave', 'onivoro'], 
    ['vertebrado', 'mamifero', 'onivoro'], 
    ['vertebrado', 'mamifero', 'herbivoro'], 
    ['invertebrado', 'inseto', 'hematofago'], 
    ['invertebrado', 'inseto', 'herbivoro'], 
    ['invertebrado', 'anelideo', 'hematofago'], 
    ['invertebrado', 'anelideo', 'onivoro']
    ]
    
correspondingTypes = ['aguia', 'pomba', 'homem', 'vaca', 'pulga', 'lagarta', 'sanguessuga', 'minhoca']

for i in range(len(allTypes)):
    if allTypes[i] == animal:
        print(correspondingTypes[i])