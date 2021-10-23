#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
float age, weight;
char plan;
cout << "Input Age" << endl;
cin >> age;
cout << "Input weight" << endl;
cin >> weight;
cout << "Pick a Planet" << endl;
cout << "A. Earth" << endl;
cout << "B. Jupiter" << endl;
cout << "C. Mars" << endl;
cout << "D. Saturn" << endl;
cout << "E. Mercury" << endl;
cout << "G. Venus" << endl;
cout << "H. Uranus" << endl;
cout << "I. Pluto" << endl;
cout << "J. Neptune" << endl;
cin >> plan;
switch (plan)
{
  case 'a': cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Earth has a powerful magnetic field, Earth is the only planet not named after a god, and The Earth is the densest planet in the Solar System." << endl;
  break;
  case 'b': weight=weight*2.36;
  age=age/11.9;
  cout << fixed << setprecision(3) << "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Jupiter is the fourth brightest object in the solar system, Jupiter has the shortest day of all the planets, and Jupiter’s interior is made of rock, metal, and hydrogen compounds." << endl;
  break;
  case 'c': weight=weight*0.38;
  age=age/1.88;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Mars and Earth have approximately the same landmass, Mars is home to the tallest mountain in the solar system, and only 18 missions to Mars have been successful." << endl;
  break;
  case 'd': weight=weight*0.91;
  age=age/29.5;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Saturn can be seen with the naked eye, Saturn is the flattest planet, and Saturn has 150 moons and smaller moonlets." << endl;
  break;
  case 'e': weight=weight*0.38;
  age=age/0.241;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Mercury is the closest planet to the Sun, Mercury does not have any moons or rings, and Mercury has a diameter of 4,879 km." << endl;
  break;
  case 'g': weight=weight*0.91;
  age=age/0.615;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: The surface temperature on Venus can reach 471 °C, A day on the surface of Venus (solar day) would appear to take 117 Earth days, and Venus is also known as the Morning Star and the Evening Star." << endl;
  break;
  case 'h': weight=weight*0.89;
  age=age/84;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: It is the 7th planet from the sun, Uranus was officially discovered by Sir William Herschel in 1781, and it is referred to as an “ice giant” planet." << endl;
  break;
  case 'i': weight=weight*0.06;
  age=age/248.5;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Pluto is named after the Greek god of the underworld, Pluto was reclassified from a planet to a dwarf planet in 2006, and Pluto is one third water." << endl;
  break;
  case 'j': weight=weight*1.12;
  age=age/164.8;
  cout << fixed << setprecision(3)<< "Age: " << age << " Weight: " << weight << endl;
  cout << "Facts: Neptune spins on its axis very rapidly, Neptune has a very active climate, and only one spacecraft has flown by Neptune." << endl;
  break;
}
 return 0;
}
