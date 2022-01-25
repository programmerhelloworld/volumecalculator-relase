print("Volume Calculator Python Edition")
print("Francesco Maresca, Program written in Python, 2022.")
choose = int(input("1 to calculate cube volume. 2 to calculate square pyramid volume. 3 to calculate rectangular parallelepiped. "))

if choose == 1:
   side = float(input("Write the side of the cube: "))
   vol = side * side * side
   strvol = str(vol)
   
   print("The volume of the cube is " + strvol + ".")
 
elif choose == 2:
     
     side = float(input("Give the side of the base: "))
     height = float(input("Give the height of the pyramid: "))
     
     area = side * side
     vol = (area * height) / 3
     strvol = str(vol)
     print("The volume of the pyramid is " + strvol)
     
elif choose == 3:
         
      side1 = float(input("Give side one: "))
      side2 = float(input("Give side two: "))
      height = float(input("Give the height: "))
      vol = side1 * side2 * height
      strvol = str(vol)
      print("The volume of the rectangular parallelepiped is " + strvol)
