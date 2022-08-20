module Test where

doble :: Int -> Int
doble n = 2 * n

cuad :: Int -> Int
cuad n = doble(doble n)

cuad' :: Int -> Int
cuad' n = 4 * n
