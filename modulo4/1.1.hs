data Base = Base Double Int
    deriving Show

data Personagem = Guerreiro Base Int | Mago Base Double | Sacerdote Base Int
    deriving Show
 

p1 :: Personagem
p1 = Guerreiro (Base 2.0 25) 60

p2 :: Personagem
p2 = Mago (Base 1.8 48) 90

main = print(p1," - ",p2)
