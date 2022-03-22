#include <iostream>


using namespace std;


class Wizzard{ //Superclase Wizzard

  public:
//Constructor de la clase Wizzard
    Wizzard(int base_power, int base_hp, string base_name){
      power = base_power;
      hp = base_hp;
      name = base_name;

    }
    //Metodo de la clase Wizzard que devuelve el valor del poder del mago
    float Damage(){
      return power;

    }
    //Metodo de la clase Wizzard que disminuye el valor de daño a la vida del mago y luego imprime el valor de la vida restante.
    void GetDamage(int damage_value){
      hp -= damage_value;
      cout << name << " HP: " << hp << endl;
    }
    //Metodo clase Wizzard que imprime el nombre del mago y su dialogo asignado
    void Speak(string dialog){
      cout << name << ": " << dialog << endl;
    }
    //Metodo de clase Wizzard que devuelve el valor de la vida del mago
    int GetHp(){
      return hp;
    }


 //Atributo protegido para que el usuario no pueda accedera ellos y modificarlo
  protected:
    float power, hp;
    string name;
};


class FireWizzard:public Wizzard{
  //El Wizzard tiene más poder de ataque pero menos vida
  public:
    FireWizzard(int base_power, int base_hp, string base_name) : Wizzard(base_power, base_hp, base_name){
      power = base_power + 10;
      hp = base_hp - 30;
      name = base_name;
  }

};

class IceWizzard:public Wizzard{
    // El Wizzard tiene más vida pero menor poder de ataque
  public:
    IceWizzard(int base_power, int base_hp, string base_name) : Wizzard(base_power, base_hp, base_name){
      power = base_power - 20;
      hp = base_hp + 20;
      name = base_name;
  }

};


int main(){
  // Apuntador al wizzard actual.
  Wizzard* current_wizzard;
  // INIT HARRY
  Wizzard Harry(20, 100, "Harry");
  Harry.Speak("Hola bienvenidos al juego.");
  // INIT GANDALF
  IceWizzard Gandalf(20, 100, "Gandalf");
  // INIT DUMBLEDORE
  FireWizzard Dumbledore(20, 100, "Dumbledore");
  int round = 1;

  // Se declaran el proceso de ataque de los magos
  //Condición que se ejecutar  la pelea
  while(Dumbledore.GetHp() > 0 && Gandalf.GetHp() > 0){
        //Creación de if para controlar los turnos o rondas de ataques
    if(round % 2){
        //Asignar dialogo del mago Harry y ejecución del metodo speak
      Harry.Speak("Dumbledore Recibe Dano!!");
        //El valor de la dirección del objeto Dumbledore es asignado al puntero current Wizzard
      current_wizzard = &Dumbledore;
      //Ejecutar el metodo GetDamage para el mago al que se apunta current Wizzard
      current_wizzard->GetDamage(Gandalf.Damage());
    }else{
        //AsIgnar dialogo dek nagi Harry y ejecucion del metodo speak
      Harry.Speak("Gandalf Recibe Dano!!");
      //El valor de la dirección del objeto Gandalf es asignado al puntero current Wizzard
      current_wizzard = &Gandalf;
       //Ejecutar el metodo GetDamage para el mago al que se apunta current Wizzard
      current_wizzard->GetDamage(Dumbledore.Damage());
    }
    cout << "***************************************" << endl;
    ++round;
  }

  //Imprime el ganador por una condición
  if(Dumbledore.GetHp() < 0){
    Harry.Speak("GANADOR!!! GANDALF");
  }else{
    Harry.Speak("GANADOR!!! DUMBLEDORE");
  }

  return 0;
}
